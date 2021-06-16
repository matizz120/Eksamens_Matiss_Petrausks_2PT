#include <iostream> //Tiek pievienots imports iostream, lai varçtu pieòemt lietotâja ievadîto mainîgo
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;
int main(){
	int score = 0; //Punktu skaits pareiziem atbildçtiem jautâjumiem
    char answer1; /*Pareizâ atbilde */
    char answer2; /*Pareizâ atbilde */
    char answer3; /*Pareizâ atbilde */
    char answer4; /*Pareizâ atbilde */
    char answer5; /*Pareizâ atbilde */
    char answer6; /*Pareizâ atbilde */
    char answer7; /*Pareizâ atbilde */
    char answer8; /*Pareizâ atbilde */
    char answer9; /*Pareizâ atbilde */
    char answer10; /*Pareizâ atbilde */
    string jaut1 = "Kas ir sazarojuma konstrukcijas?"; //1. Jautâjums
    string jaut2 = "Ko sazarojuma iekavas raksta ieksha?"; //2. Jautâjums
    string jaut3 = "Ja if/switch nosacijums ir patiess, kas notiek?"; //3. Jautâjums
    string jaut4 = "Cik strukturetaja if sazarojuma konstrukcija pastav sazarojumu konstrukciju?"; //4. Jautâjums
    string jaut5 = "Ja if/switch nosacijums ir nepatiess, kas notiek?"; //5. Jautâjums
    string jaut6 = "Kursh no sazarojuma konstrukcijam nedarbojas C++?"; //6. Jautâjums
    string jaut7 = "Cik mainigie drikst but if/switch nosacijuma?"; //7. Jautâjums
    string jaut8 = "Kur sazarojuma konstrukcija tiek izverteta?"; //8. Jautâjums
    string jaut9 = "Vai sazarojuma konstrukcija tikai sastav no if strukturas?"; //9. Jautâjums
    string jaut10 = "Kursh no sazarojumu konstrukcijam ir visertakais?"; //10. Jautâjums 
    
    cout << endl;
    cout << jaut1 << endl << endl;
    cout << "A) Nosacijuma apgalvojums" << endl;
    cout << "B) Tekstdatnes izvade" << endl;
    cout << "C) Simbolu virkne" << endl;
    cout << "D) Divdimensiju masivs" << endl;
    cin >> answer1;
        if(answer1 == 'a' || answer1 == 'A'){
    	score++;
}
}
