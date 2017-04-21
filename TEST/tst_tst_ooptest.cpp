#include <QString>
#include <QtTest>
#include "plant.h"
#include "tree.h"
#include "bush.h"
#include "flower.h"
#include "container.h"
#include <fstream>
#include <iostream>
using namespace std;



class Tst_oopTest : public QObject
{
    Q_OBJECT

public:
    Tst_oopTest();

private Q_SLOTS:
    void testIn();
    void testOut();
    void sortSort();
    void sortAsort();
    void sortAlone();
    void sortZero();
    void testZero();
    void testAlone();
    void testOnlyTree();
    void TestConsonant_count();
    void TestConsonant_count2();
    void TestConsonant_count3();
    void TestConsonant_count4();
	void TestCompare_data();
    void TestCompare();
    void TestCompare2();
    void TestCompare3();
    void testIn2();
    void ContainerClear();
};

Tst_oopTest::Tst_oopTest()
{
}
//тест ф-и ввода
void Tst_oopTest::testIn()
{
    container c;
    ifstream ifst;
    ifst.open("in.txt");
    ofstream ofst;
    ofst.open("out1.txt");
    c.in(ifst);
    c.out(ofst);
    ifst.close();
    ofst.close();
    ifstream actual;
    actual.open("out1.txt");
    ifstream expected;
    expected.open("out.txt");
    char act;
    char exp;
    while(!actual.eof())
    {
        actual >> act;
        expected >> exp;
        QCOMPARE(act, exp);
    }
    actual.close();
    expected.close();
}




//тест ф-и вывода
void Tst_oopTest::testOut()
{
    container c;
    ifstream ifst;
    ifst.open("in.txt");
    ofstream ofst;
    ofst.open("out2.txt");
    c.in(ifst);
    c.sort();
    c.out(ofst);
    c.outTrees(ofst);
    ifst.close();
    ofst.close();
    ifstream actual;
    actual.open("out2.txt");
    ifstream expected;
    expected.open("out_vv.txt");
    char act;
    char exp;
    while(!actual.eof())
    {
        actual >> act;
        expected >> exp;
        QCOMPARE(act, exp);
    }
    actual.close();
    expected.close();
}


//сортировка  отсортированного файла
void Tst_oopTest::sortSort()
{
    container c;
    ifstream ifst;
    ifst.open("to_sort.txt");
    ofstream ofst;
    ofst.open("sort.txt");
    c.in(ifst);
    c.sort();
    c.out(ofst);
    ifst.close();
    ofst.close();
    ifstream actual;
    actual.open("sort.txt");
    ifstream expected;
    expected.open("yes_sort.txt");
    char act;
    char exp;
    while(!actual.eof())
    {
        actual >> act;
        expected >> exp;
        QCOMPARE(act, exp);
    }
    actual.close();
    expected.close();
}
//сортировка  файла отсортированного в обратном порядке
void Tst_oopTest::sortAsort()
{
    container c;
    ifstream ifst;
    ifst.open("to_asort.txt");
    ofstream ofst;
    ofst.open("sort2.txt");
    c.in(ifst);
    c.sort();
    c.out(ofst);
    ifst.close();
    ofst.close();
    ifstream actual;
    actual.open("sort2.txt");
    ifstream expected;
    expected.open("yes_sort.txt");
    char act;
    char exp;
    while(!actual.eof())
    {
        actual >> act;
        expected >> exp;
        QCOMPARE(act, exp);
    }
    actual.close();
    expected.close();
}
//сортировка  файла с одним элементом

void Tst_oopTest::sortAlone()
{
    container c;
    ifstream ifst;
    ifst.open("to_alone.txt");
    ofstream ofst;
    ofst.open("sort3.txt");
    c.in(ifst);
    c.sort();
    c.out(ofst);
    ifst.close();
    ofst.close();
    ifstream actual;
    actual.open("sort3.txt");
    ifstream expected;
    expected.open("yes_alone_sort.txt");
    char act;
    char exp;
    while(!actual.eof())
    {
        actual >> act;
        expected >> exp;
        QCOMPARE(act, exp);
    }
    actual.close();
    expected.close();
}

//сортировка пустого файла
void Tst_oopTest::sortZero()
{
    container c;
    ifstream ifst;
    ifst.open("to_zero.txt");
    ofstream ofst;
    ofst.open("sort4.txt");
    c.in(ifst);
    c.sort();
    c.out(ofst);
    ifst.close();
    ofst.close();
    ifstream actual;
    actual.open("sort4.txt");
    ifstream expected;
    expected.open("yes_zero_sort.txt");
    char act;
    char exp;
    while(!actual.eof())
    {
        actual >> act;
        expected >> exp;
        QCOMPARE(act, exp);
    }
    actual.close();
    expected.close();
}
//тест с пустым файлом
void Tst_oopTest::testZero()
{
    container c;
    ifstream ifst;
    ifst.open("to_zero.txt");
    ofstream ofst;
    ofst.open("out_zero.txt");
    c.in(ifst);
    c.out(ofst);
    ifst.close();
    ofst.close();
    ifstream actual;
    actual.open("out_zero.txt");
    ifstream expected;
    expected.open("yes_zero.txt");
    char act;
    char exp;
    while(!actual.eof())
    {
        actual >> act;
        expected >> exp;
        QCOMPARE(act, exp);
    }
    actual.close();
    expected.close();
}

//тест с одним элементом
void Tst_oopTest::testAlone()
{
    container c;
    ifstream ifst;
    ifst.open("to_alone.txt");
    ofstream ofst;
    ofst.open("out_alone.txt");
    c.in(ifst);
    c.out(ofst);
    ifst.close();
    ofst.close();
    ifstream actual;
    actual.open("out_alone.txt");
    ifstream expected;
    expected.open("yes_alone.txt");
    char act;
    char exp;
    while(!actual.eof())
    {
        actual >> act;
        expected >> exp;
        QCOMPARE(act, exp);
    }
    actual.close();
    expected.close();
}


//тест функции вывода только деревьев
void Tst_oopTest::testOnlyTree()
{
    container c;
    ifstream ifst;
    ifst.open("in.txt");
    ofstream ofst;
    ofst.open("out_tree.txt");
    c.in(ifst);
    c.outTrees(ofst);
    ifst.close();
    ofst.close();
    ifstream actual;
    actual.open("out_tree.txt");
    ifstream expected;
    expected.open("yes_tree.txt");
    char act;
    char exp;
    while(!actual.eof())
    {
        actual >> act;
        expected >> exp;
        QCOMPARE(act, exp);
    }
    actual.close();
    expected.close();
}


//тесты функции cогласных
//разного регистра
void Tst_oopTest::TestConsonant_count()
{
    plant p;
    p.name="Beresa";
    int act=p.consonant_count();
    int exp=3;
    QCOMPARE(act, exp);
    }
//без согласных
void Tst_oopTest::TestConsonant_count2()
{
    plant p;
    p.name="Aea";
    int act=p.consonant_count();
    int exp=0;
    QCOMPARE(act, exp);
    }
//с повторяющейся буквой
void Tst_oopTest::TestConsonant_count3()
{
    plant p;
    p.name="kaktus";
    int act=p.consonant_count();
    int exp=4;
    QCOMPARE(act, exp);
    }
//только согласные
void Tst_oopTest::TestConsonant_count4()
{
    plant p;
    p.name="qwrtypsdfghklzxcvbnm";
    int act=p.consonant_count();
    int exp=20;
    QCOMPARE(act, exp);
    }
/*void Tst_oopTest::TestCompare_data()
{
	QTest::addColumn<std::string>("name1");
	QTest::addColumn<std::string>("name2");
	QTest::addColumn<bool>("exp");
	QTest::newRow("compare01") << "beresa" << "romashka" << true;
	QTest::newRow("compare02") << "romashka" << "beresa" << false;
	QTest::newRow("compare03") << "romashka" << "romashka" << false;  //альтернатива TestCompare, позволяет сделать тесты независимыми друг от друга
}
 void Tst_oopTest::TestCompare()
 {
	QFETCH(std::string, name1);
	QFETCH(std::string, name2);
	QFETCH(bool, exp);
	plant a;
	a.name=name1;
	plant b;
	b.name=name2;
	bool act= a.compare(b);
	QCOMPARE(act, exp);
 }*/
//тест сравнения меньше больше
void Tst_oopTest::TestCompare()
{
    plant a;
    a.name="beresa";
    plant l;
    l.name="romashka";
    a.compare(l);
    bool act=a.compare(l);
    bool exp=true;
    QCOMPARE(act, exp);
}
//тест сравнения меньше больше
void Tst_oopTest::TestCompare2()
{
    plant a;
    a.name="romashka";
    plant l;
    l.name="beresa";
    a.compare(l);
    bool act=a.compare(l);
    bool exp=false;
    QCOMPARE(act, exp);
}


//тест сравнения равных
void Tst_oopTest::TestCompare3()
{
    plant a;
    a.name="romashka";
    plant l;
    l.name="romashka";
    a.compare(l);
    bool act=a.compare(l);
    bool exp=false;
    QCOMPARE(act, exp);
}


//тест на определение количества элементов в файле
void Tst_oopTest::testIn2()
{
    container *c;
    c = new container;
    ifstream ifst;
    ifst.open("in.txt");
    c->in(ifst);
    int actuallen = c->len;
    int expectedlen = 7;
    QCOMPARE(actuallen, expectedlen);

}

//тест на очистку контейнера
void Tst_oopTest::ContainerClear()
{
    container *c;
    c = new container;
    ifstream ifst;
    ifst.open("in.txt");
    c->in(ifst);
    c->clear();
    int act=c->len;
    int exp = 0;
    QCOMPARE(act, exp);

}


QTEST_APPLESS_MAIN(Tst_oopTest)

#include "tst_tst_ooptest.moc"
