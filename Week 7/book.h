#pragma once
#include <iostream>
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

    friend std::ostream& operator<<(std::ostream& output, Book book){
        output << printf("\n%.10s%13.11s\t%40.35s\t%d%4s\t $%.2f", book.codeNum.c_str(), book.author.c_str(),
            book.title.c_str(), book.getEdition(), book.pubCode.c_str(), book.getPrice());
        return output;
    }

    friend bool operator==(Book& book1, Book& book2){
        if (book1.codeNum == book2.codeNum){
            return true;
        }

        return false;
    }
};