//
// Created by julia on 28/12/2023.
//
#include <iostream>

using namespace std;

#include "ArbreCerca.h"

ArbreCerca::ArbreCerca()
{
    arrel = NULL;
}

ArbreCerca::ArbreCerca(int t[], int n) // t nom del vector i n size de t
{
// per completar
// t(n) = 2T(n/2) + 1
// t(n) es O(nlogba)
//b=2 / a=2 / k=0
// 1 2 4 3 5 6 0

    arrel=iArbreCerca(t,0,n-1);
}

ArbreCerca::node* ArbreCerca::iArbreCerca(int t[],int min,int max){

    if (min > max) {
        return NULL;
    }

    int mig = (min + max) / 2;
    node* nouNode = new node;
    nouNode->dada = t[mig];

    nouNode->fe = iArbreCerca(t, min, mig - 1);  // Subarbre esq
    nouNode->fd = iArbreCerca(t, mig + 1, max);  // Subarbre dret

    return nouNode;
}

bool ArbreCerca::esBuit() const
{
    return arrel == NULL;
}

void ArbreCerca::MostrarPre() const
{
    if (not esBuit())
        iMostrarPre(arrel);
    cout << endl;
}

void ArbreCerca::iMostrarPre(node* a) const
{
    cout << a->dada;
    if (a->fe != NULL) {
        cout << '(';
        iMostrarPre(a->fe);
        if (a->fd != NULL) {
            cout << ' ';
            iMostrarPre(a->fd);
        }
        cout << ')';
    }
    else if (a->fd != NULL) {
        cout << "( ";
        iMostrarPre(a->fd);
        cout << ')';
    }
}