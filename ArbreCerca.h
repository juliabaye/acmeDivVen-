//
// Created by julia on 28/12/2023.
//

#ifndef ARBRECERCA_H
#define ARBRECERCA_H


class ArbreCerca
{
    public:
        ArbreCerca();
        ArbreCerca(int t[], int n);

        bool esBuit() const;
        void Afegir(int n);
        void Esborrar(int n);
        bool Existeix(int n) const;
        void MostrarPre() const;

    private: // no es pot canviar la representacio
        struct node{int dada; node *fe, *fd;};

        node * arrel;

        // es poden afegit metodes privats
        void iMostrarPre(node* a) const;
        node* iArbreCerca(int t[],int min, int max);
};

#endif // ARBRECERCA_H