#include <iostream>

class Book {//сподіваюсь ви пам`ятаєте про душу (весь текст англійською бо у мене візуал не підтримує українську, лише в коментарях)
private:
    std::string author;
    std::string title;
    int year;
    int pageCount;

public:
    
    Book(const std::string& _author, const std::string& _title, int _year, int _pageCount)
        : author(_author), title(_title), year(_year), pageCount(_pageCount) {}

    
    Book(const Book& other)
        : author(other.author), title(other.title), year(other.year), pageCount(other.pageCount) {}

   
    void print() const {
        std::cout << "Author: " << author << std::endl;
        std::cout << "Name: " << title << std::endl;
        std::cout << "Year: " << year << std::endl;
        std::cout << "Page amount: " << pageCount << std::endl;
    }
};

int main() {
    Book book1("Bebra Bebrivna", "2077", 2077, 69);
    Book book2 = book1;

    std::cout << " Info 1:" << std::endl;
    book1.print();
    std::cout << std::endl;

    std::cout << " Info 2 (copy info 1):" << std::endl;
    book2.print();

    return 0;
}