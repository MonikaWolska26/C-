/*Napisz klase Button reprezentujaca przycisk graficznego interfejsu uzytkownika. Przycisk moze byc w³aczony
lub wy³aczony. Nowoutworzony przycisk jest wy³aczony. Zadeklaruj:
• Sta³a bezargumentowa metode on, która zwraca prawde jesli przycisk jest w³aczony oraz fa³sz jesli
jest wy³aczony.
• Bezargumentowa metode wirtualna press wywo³ywana przy wcisnieciu przycisku.
• Bezargumentowa metode wirtualna release wywo³ywana przy zwolnieniu przycisku.
Z klasy Button wyprowadz klase PushButton reprezentujaca przycisk, który w³acza sie przy kazdym
nacisnieciu i wy³acza przy kazdym zwolnieniu. Wyprowadz tez klase SwitchButton reprezentujaca przycisk,
który w³acza sie przy jednym wcisnieciu a wy³acza przy nastepnym i tak dalej, zas na zwolnienie
nie reaguje. Klasy powinny byc przystosowane do uzycia w przyk³adowym programie ponizej. Klasy nie
korzystaja z zadnych plikó nag³ówkowych.*/

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
