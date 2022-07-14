#include <iostream>
#include <vector>
#include <string>

class Widget {
    std::vector <Widget *> m_children;
    Widget * m_parent;
    std::string m_name;
public:
    Widget(std::string name): m_name{name}, m_parent{nullptr} {}
    ~Widget();
    void add(Widget * toAdd) { toAdd->m_parent = this; m_children.push_back(toAdd);}
    void print() const;
    void print_road() const;
};

Widget::~Widget()
{
    for(int i = 0;i < m_children.size();i++)
    {
        delete m_children.at(i);
    }
}

void Widget::print_road() const {
    if(this->m_parent != nullptr)
    {
        this->m_parent->print_road();
    }
    std::cout << this->m_name << " ";
}
void Widget::print() const{
    this->print_road();
    std::cout << std::endl;
    for(int i = 0;i < m_children.size();i++)
    {
        m_children.at(i)->print();
    }
}

class Button : public Widget {
public:
    Button(std::string name): Widget(name) {}
};
class Edit : public Widget {
    public:
    Edit(std::string name): Widget(name) {}
};


int main()
{
    Button *yes = new Button("yes");
    Button *no = new Button("no");
    Widget *panel = new Widget("panel");
    panel->add(yes);
    panel->add(no);
    Edit *edit = new Edit("edit");
    Widget *window = new Widget("window");
    window->add(panel);
    window->add(edit);
    window->print();
    delete window;
}
