/*Napisz klase Button reprezentujaca przycisk graficznego interfejsu uzytkownika. Przycisk moze byc w�aczony
lub wy�aczony. Nowoutworzony przycisk jest wy�aczony. Zadeklaruj:
� Sta�a bezargumentowa metode on, kt�ra zwraca prawde jesli przycisk jest w�aczony oraz fa�sz jesli
jest wy�aczony.
� Bezargumentowa metode wirtualna press wywo�ywana przy wcisnieciu przycisku.
� Bezargumentowa metode wirtualna release wywo�ywana przy zwolnieniu przycisku.
Z klasy Button wyprowadz klase PushButton reprezentujaca przycisk, kt�ry w�acza sie przy kazdym
nacisnieciu i wy�acza przy kazdym zwolnieniu. Wyprowadz tez klase SwitchButton reprezentujaca przycisk,
kt�ry w�acza sie przy jednym wcisnieciu a wy�acza przy nastepnym i tak dalej, zas na zwolnienie
nie reaguje. Klasy powinny byc przystosowane do uzycia w przyk�adowym programie ponizej. Klasy nie
korzystaja z zadnych plik� nag��wkowych.*/

#include <iostream>
class Button
{

public:
    Button()
    {
        is_on = false;
    }
    bool is_on;

    bool on() const
    {
        return is_on;
    }

    virtual bool press()
    {
        return 0;
    };

    virtual bool release()
    {
        return 0;
    };
private:

};
class PushButton
    : public Button
{
    public:
    PushButton() {};
    bool press()

    {
       return Button::is_on = true;
    }
    bool release()
    {
       return Button::is_on = false;
    }
};
class SwitchButton
    : public Button
{
    public:
    SwitchButton() {};
    bool press()
    {
       return Button::is_on = !Button::is_on;
    }
    bool release()
    {
        return 0;
    }
};



int main()
{
    std::cout << std::boolalpha;
    Button *pushButton = new PushButton;
    std::cout << pushButton->on() << " ";
    pushButton->press();
    std::cout << pushButton->on() << " ";
    pushButton->release();
    std::cout << pushButton->on() << std::endl;
    delete pushButton;
    Button *switchButton = new SwitchButton;
    std::cout << switchButton->on() << " ";
    switchButton->press();
    std::cout << switchButton->on() << " ";
    switchButton->release();
    std::cout << switchButton->on() << " ";
    switchButton->press();
    std::cout << switchButton->on() << std::endl;
    delete switchButton;
}
