#include "TestClass.h"

TestClass::TestClass()
{
    m_vecAlg.push_back(new SelectionSort());
    m_vecAlg.push_back(new InsertionSort());
    m_fPrint = [] (int &x) {cout << x << " ";};
}

TestClass::~TestClass()
{
    for(auto s : m_vecAlg)
    {
        delete s;
    }
}

void TestClass::TestSortAlgorthms()
{
    cout << "TESTING SORT ALGORITHMS..." << endl;

    //Testing all algorithms
    for(auto s : m_vecAlg)
    {
        cout << endl;
        cout << "----- " << s->GetAlgorithmName() << " -----" << endl;
        TestEmptyArray(s);
        TestSameNumberArray(s);
        TestOrderedArray(s);
        TestReverseOrderedArray(s);
        TestSomeEqualNumberArray(s);
        TestNegativeArray(s);
        cout << "----- " << s->GetAlgorithmName() << " Finished -----" << endl;
    }

    cout << "TESTING SORT ALGORITHMS FINISHED!!!" << endl;
}


void TestClass::TestEmptyArray(ISort *pAlg)
{
    cout << "Empty array:" << endl;
    vector<int> v;

    //Print array before order it
    for_each(v.begin(), v.end(), m_fPrint);

    //Skip line
    cout << endl;

    pAlg->Sort(v);

    //Print array After order it
    for_each(v.begin(), v.end(), m_fPrint);
    //Skip line
    cout << endl << "---" << endl;
}

void TestClass::TestSameNumberArray(ISort *pAlg)
{
    cout << "Same number array:" << endl;
    vector<int> v = {2, 2, 2, 2, 2, 2};

    //Print array before order it
    for_each(v.begin(), v.end(), m_fPrint);

    //Skip line
    cout << endl;

    pAlg->Sort(v);

    //Print array After order it
    for_each(v.begin(), v.end(), m_fPrint);
    //Skip line
    cout << endl << "---" << endl;
}

void TestClass::TestOrderedArray(ISort *pAlg)
{
    cout << "Ordered array:" << endl;
    vector<int> v = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    //Print array before order it
    for_each(v.begin(), v.end(), m_fPrint);

    //Skip line
    cout << endl;

    pAlg->Sort(v);

    //Print array After order it
    for_each(v.begin(), v.end(), m_fPrint);
    //Skip line
    cout << endl << "---" << endl;
}

void TestClass::TestReverseOrderedArray(ISort *pAlg)
{
    cout << "Reverse ordered array:" << endl;
    vector<int> v = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    //Print array before order it
    for_each(v.begin(), v.end(), m_fPrint);

    //Skip line
    cout << endl;

    pAlg->Sort(v);

    //Print array After order it
    for_each(v.begin(), v.end(), m_fPrint);
    //Skip line
    cout << endl << "---" << endl;
}

void TestClass::TestSomeEqualNumberArray(ISort *pAlg)
{
    cout << "Some equal numbers array:" << endl;
    vector<int> v = {0, 0, 1, 4, 6, 9, 3, 6, 4, 3, 2, 1, 0, 10, 35, 35, 10};

    //Print array before order it
    for_each(v.begin(), v.end(), m_fPrint);

    //Skip line
    cout << endl;

    pAlg->Sort(v);

    //Print array After order it
    for_each(v.begin(), v.end(), m_fPrint);
    //Skip line
    cout << endl << "---" << endl;
}

void TestClass::TestNegativeArray(ISort *pAlg)
{
    cout << "Negative numbers array:" << endl;
    vector<int> v = {0, 0, 1, -4, 6, 9, 3, -6, 4, 3, 2, -1, -0, 10, -35, -35, -10};

    //Print array before order it
    for_each(v.begin(), v.end(), m_fPrint);

    //Skip line
    cout << endl;

    pAlg->Sort(v);

    //Print array After order it
    for_each(v.begin(), v.end(), m_fPrint);
    //Skip line
    cout << endl << "---" << endl;
}
