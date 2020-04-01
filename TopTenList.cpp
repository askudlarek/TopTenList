//Manages a list of top ten hyperlinks
#include <iostream>
#include <string>
#include "TopTenList.h"
#include "Hyperlink.h"

using std::string;
using std::cout;
using std::endl;

TopTenList::TopTenList()
{
    _list.resize(10);
}

void TopTenList::set_at(int index, Hyperlink link)
{
    _list.insert(_list.begin()+index-1, link);
}

Hyperlink TopTenList::get(int index)
{
    return _list.at(index-1);
}


void TopTenList::display_forward()
{
    for (int i = 0; i < 10; i++) {
        cout << (i+1) + " " + _list[i].text << endl;
    }
}
void TopTenList::display_backward()
{
    for (int i = 9; i >= 0; i--) {
        cout << (i) + " " + _list[i].text << endl;
    }
}
