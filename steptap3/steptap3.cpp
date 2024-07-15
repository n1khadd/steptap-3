#include <iostream>
using namespace std;
int main()
{
    double filesizegb;
    double downloadspeedmbps;


    cout << "filmin ölçüsünü (gb) daxil edin: ";
    cin >> filesizegb;

    cout << "internet sürətinizi (mbps) daxil edin: ";
    cin >> downloadspeedmbps;


    double filesizebits = filesizegb * 8 * 1024 * 1024 * 1024; // gb den bite
    double downloadspeedbps = downloadspeedmbps * 1024 * 1024; // mbps den bpse

    double downloadtimeseconds = filesizebits / downloadspeedbps;

    int hours = downloadtimeseconds / 3600;
    downloadtimeseconds = downloadtimeseconds - (hours * 3600);
    int minutes = downloadtimeseconds / 60;
    downloadtimeseconds = downloadtimeseconds - (minutes * 60);
    int seconds = downloadtimeseconds;


    cout << "filmin yüklənmə müddəti: "
        << hours << " saat, "
        << minutes << " dəqiqə, "
        << seconds << " saniyə"
        << endl;
    ---------------------
    double flashgb;
    double kino = 760;
    cout << "flaş drive-ın gigabayt ilə ölçüsünü daxil edin: ";
    cin >> flashgb;
    int tutum = kino / flashgb;
    cout << "760 megabaytlıq kino " << tutum << " defe yerlesecek." << endl;
    ----------------------
    int pass;
    int fail;

    cout << "ımtahandan kecenlerin sayi: ";
    cin >> pass;
    cout << "imtahandan kesilenlerin sayi: ";
    cin >> fail;

    int sinif = pass + fail;
    int passfaiz = (sinif * pass) / 100;
    int failfaiz = (sinif * fail) / 100;

    cout << "ımtahandan kecenlerin faizi: ";
    cout << passfaiz <<"%"<< endl;
    cout << "imtahandan kesilenlerin faizi: ";
    cout << failfaiz << "%";
    ---------------------
    const double disket = 1.44;
    int film;
    cout << "filminiz nece gb-dir?: ";
    cin >> film;
    int lazimdisk = film / disket;
    cout << "filminize " << lazimdisk << " disket lazimdir";
    ----------------------

     double number;
     cout << "kəsr ədəd daxil edin: ";
     cin >> number;
     int cevir = number * 100;
     number = cevir / 100.0;
     cout << "nəticə: " << number << std::endl;
    //cox easy idi:)
}
