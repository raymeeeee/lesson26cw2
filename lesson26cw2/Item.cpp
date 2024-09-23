#include "Item.h"

Item::Item()
{
    m_name;
    m_author;
    m_year;
    m_price;
}

Item::Item(string name, string author, int year, float price)
{
}

void Item::setName(string name)
{
}

void Item::setAuthor(string author)
{
}

void Item::setYear(int year)
{
}

void Item::setPrice(float price)
{
}

string Item::getName() const
{
    return string();
}

string Item::getAuthor() const
{
    return string();
}

int Item::getYear() const
{
    return 0;
}

float Item::getPrice() const
{
    return 0.0f;
}

void Item::showItem() const
{
}
