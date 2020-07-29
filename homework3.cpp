#include <iostream>
using namespace std;
int main()
{
	cout <<"========================Quizzes======================"<< endl;
	float first,second,third;
    cout << "Enter First quizz(10) : " ;
    cin >> first;
    cout << "Enter Second quizz(10) : " ;
    cin >> second;
    cout << "Enter Third quizz(10) : " ;
    cin >> third;
	cout <<"========================Midterm======================"<< endl;
    float mid;
    cout << "Enter Midterm(40) : " ;
    cin >> mid;
	cout <<"========================Final======================"<< endl;
	float final,total;
	cout << "Enter Final(50) : " ;
    cin >> final;
	total=(first+second+third)/3;
	cout<<"quizz total : "<<total<<endl;
	cout<<"Midterm : "<<mid<<endl;
	cout<<"Final : "<<final<<endl;
	total=total+mid+final;
	cout<<"Total : "<< total<<endl;
	cout<<"Your score is "<<((total>=50)==0?"PASS":"FAIL")<< endl;
	cout<< "Natdanai Jansomboon"<< endl;
	cout<<"6306021621014"<<endl;
    return (0);
}