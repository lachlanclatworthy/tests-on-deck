/* main.cc */

#include <iostream>
#include <vector>

const double AspectRatio = 1.653;
const std::string AuthorName = "Francesco DiMalzini";

class Matrix {};

Matrix operator+(const Matrix &lhs, const Matrix &rhs);

class Widget {
  public:
    Widget(Widget &&rhs);
};

class Rational {};

const Rational operator*(const Rational &lhs, const Rational &rhs) {

    return Rational();
}

class TextBlock {
public:
    TextBlock(std::string t) : text(t) {}

    const char& operator[](std::size_t position) const {
        return text[position];
    }

    char& operator[](std::size_t position) {
        return text[position];
    }
private:
    std::string text;
};

void print(const TextBlock& ctb) {std::cout << ctb[0];}

class CTextBlock {
public:
    std::size_t length() const;
private:
    char *pText;
    mutable std::size_t textLength;
    mutable bool lengthIsValid;
};

std::size_t CTextBlock::length() const {
    if (!lengthIsValid) {
        textLength = std::strlen(pText);
        lengthIsValid = true;
    }

    return textLength;
}

class GamePlayer {
  private:
    static const int NumTurns = 5;
    int scores[NumTurns];

    enum { PlayerCount = 20 };
    int teamSize[PlayerCount];
};

class CostEstimate {
    static const double FudgeFactor;
};

const double CostEstimate::FudgeFactor = 1.45;

template <typename T> inline void f(const T &a) {
    using namespace std;
    cout << a << endl;
}

template <typename T> inline void callWithMax(const T &a, const T &b) {
    f(a > b ? a : b);
}

template <class... Ts>
void processVals(const Ts&... params) {}

void f1(const Widget *pw) {}

void f2(Widget const *pw) {}

void itExample() {
    std::vector<int> vec;

    // int* const
    const std::vector<int>::iterator iter = vec.begin();
    *iter = 10;

    // const int*
    std::vector<int>::const_iterator citer = vec.begin();
    ++citer;
}

void ratExample() {
    Rational a, b, c;
    c = a * b;
}

void manyGreetings() {
    char greeting[] = "Hello";
    char *p1 = greeting;
    const char *p2 = greeting;
    char *const p3 = greeting;
    const char *const p4 = greeting;
}

int main() {
    TextBlock tb("Hello");
    const TextBlock ctb("World");

    tb[0] = 'R';
//    ctb[4] = 'f';

    print(tb);
    print(ctb);

    GamePlayer g;
    for (int i = 0; i < 20; i++)
        callWithMax(0.4f, 4.02341f);

    std::cout << AspectRatio << std::endl;

    return 0;
}
