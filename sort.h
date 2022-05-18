#pragma once


template < typename type>

class sort {
private:
    type * data;
    int size ;
public:
    sort();
    void bubble();
    void selection();
    void insertion();
    void merge();
    void quick();
};

template <typename  type> sort<type>::sort(type* data, int size = -1) data(data), size(size){}

template <typename type> void sort<type>::bubble() {

}

template <typename type> void sort<type>::selection() {

};
template <typename type> void sort<type>::insertion() {

}
template <typename type> void sort<type>::merge() {

}
}
template <typename type> void sort<type>::quick() {

}
