#pragma once
#include <string>

class Book
{
    private:
        std::string codeNum, author, title, pubCode;
        int edition;
        double price;
    public:
        Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr) {
            codeNum = cn;
            author = au;
            title = ti;
            edition = ed;
            pubCode = pc;
            price = pr;
        }

        Book(){}

        inline std::string getTitle(){
            return title;
        }

        inline std::string getAuthor(){
            return author;
        }

        inline double getPrice(){
            return price;
        }

        inline int getEdition(){
            return edition;
        }

        inline std::string getISBN(){
            return codeNum;
        }

        inline std::string getPubCode(){
            return pubCode;
        }

        inline void changePrice(double newPrice){
            price = newPrice;
        }
};