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
    _list[index-1] = link;
}

Hyperlink TopTenList::get(int index)
{
    return _list[index-1];
}


void TopTenList::display_forward()
{
    cout<<"Top Ten List Languages";
    if( _list.size() == 0 )
    {
      cout<< " is empty.\n";
    }
    else
    {
      cout<< ":\n";
    }

    for (int i = 0; i < _list.size(); i++){
        cout << i+1 << " of " << _list.size() << " ";
        cout << _list[i].text << " " << _list[i].url << endl;
    }
}

void TopTenList::display_backward()
{
    cout<<"Top Ten List Languages";
    if( _list.size() == 0 )
    {
      cout<< " is empty.\n";
    }
    else
    {
      cout<< ":\n";
    }

    for (int i = _list.size()-1; i >= 0; i--){
        cout << i+1 << " of " << _list.size() << " ";
        cout << _list[i].text << " " << _list[i].url << endl;
    }}
