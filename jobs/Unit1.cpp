//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "acAlphaImageList"
#pragma link "acPNG"
#pragma link "sCheckListBox"
#pragma link "sListBox"
#pragma link "sPanel"
#pragma link "sSkinManager"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::RadioGroup1Click(TObject *Sender)
{
     switch(RadioGroup1->ItemIndex){
     case 0: Image1->Picture->LoadFromFile("Screenshot_1.png");
     Memo1->Text="Aktyor (erkak) yoki aktrisa (ayol) (lotincha: act – „ijro“), drama, opera, balet, qo'g'irchoq teatri, estrada, sirk, film, radio va televideniyada rollar ijro etuvchi shaxs.[1] Aktyor o'z tanasi, ovozi, aqli, his-tuyg'ulari, qobiliyati vositasida jonli badiiy obraz yaratadi. Aktyor artistdan farqli o'laroq, biror tayinli obrazni ifoda etadi.";
     break;

     case 1: Image1->Picture->LoadFromFile("Screenshot_2.png");
     Memo1->Clear();
     Memo1->Text="Artist (frans. artiste – bilimdon; lot. ars, artis – kasb, hunar, san'at) – dramatik spektakl, kinoda rollar, opera va balet partiyalari, estrada konserti va sirk nomerlari ijrochisi. Teatr va kinoda aktyor, aktrisa deb ham yuritiladi.";
     break;

     case 2: Image1->Picture->LoadFromFile("Screenshot_3.png");
     Memo1->Clear();
     Memo1->Text="Fazogir (AQShda: astronavt, Rossiyada: kosmonavt, Xitoyda: taykonavt) fazoviy kema ekipaji a'zosi bo?lib xizmat qilishga tayyorlangan shaxsdir. Fazogirlar koinotda ishlashadi, fazoga sayohat qiluvchilar esa fazoviy sayyoh, deb atalishadi. Ilk fazogir Yuriy Gagarindir. Astronavt (astro… va yun. nautike — kema yuritish) — ba'zi mamlakatlar (mas, AQSH)da kosmonavt atamasi o'rnida ishlatiluvchi so'z.";
     break;

     case 3: Image1->Picture->LoadFromFile("Screenshot_4.png");
     Memo1->Clear();
     Memo1->Text="Atlet – 1) atletika bilan shug'ullanuvchi sportchi yoki sirk artisti; 2) qomati kelishgan, baquvvat, chayir odam.";
     break;

     case 4: Image1->Picture->LoadFromFile("Screenshot_5.png");
     Memo1->Clear();
     Memo1->Text="Stomatologiya (yun. 'stomatos' — og'iz va 'logos' - fan, ta'limot) — klinik tibbiyotning bir sohasi; og'iz bo'shlig'i a'zolari: til, lab, lunj, og'iz shilliq pardalari hamda yuz-jag' tizimi va unga yondosh soha kasalliklarini, ularni keltirib chiqaradigan sabablarni va mazkur kasalliklarning oldini olish usullarini o'rganadi. Og'iz bo'shlig'i a'zolari kasalliklari Gippokrat, Ibn Sino, Galen, Sels va boshqa olimlar tomonidan tavsiflangan.";
     break;

     case 5: Image1->Picture->LoadFromFile("Screenshot_6.png");
     Memo1->Clear();
     Memo1->Text="Shifokor tibbiy xodim, kasallikka chalingan yoki jarohatlangan odam sog'lig'ini tiklash bilan shug'ullanuvchi shaxsdir. Boshqa nomlari - 'doktor', 'vrach', 'tabib' (asosan xalq tabobatiga oid), 'hakim'.";
     break;

     case 6: Image1->Picture->LoadFromFile("Screenshot_7.png");
     Memo1->Clear();
     Memo1->Text="O't o'chiruvchi-professional yong'in xavfsizligi bo'limining xodimi, o't o'chiruvchilarni hisoblash birligi. Yong'in uchun chiqishlar orasidagi intervallarda, kunduzi (garaj, ofis va uy-joy binolari, yong'in deposi binosi oldida), post yoki soqchi sifatida xizmat qilishi mumkin.";
     break;

     case 7: Image1->Picture->LoadFromFile("Screenshot_8.png");
     Memo1->Clear();
     Memo1->Text="Musiqachilar har qanday musiqiy uslubda ixtisoslashishi mumkin, ba'zi musiqachilar madaniyat va kelib chiqishiga qarab turli xil uslublarda ijro etishadi. Musiqachining mumkin bo'lgan mahoratiga misollar kiradi ijro etish, dirijyorlik, qo'shiq aytish, rap, ishlab chiqarish, bastakorlik, tartibga solish, va orkestratsiya musiqa.";
     break;

     case 8: Image1->Picture->LoadFromFile("Screenshot_9.png");
     Memo1->Clear();
     Memo1->Text="Uchuvchi-juda qimmatli so'z: uchuvchi uchuvchi, samolyotni boshqaradi (samolyot, vertolyot, Sayyora, samolyot). Uchuvchi-professional poyga haydovchisi yoki mototsikl haydovchisi. Uchuvchi-kartani boshqaruvchi sportchi, bob. Kosmik kemani boshqaruvchi uchuvchi kosmonavt.";
     break;

     case 9: Image1->Picture->LoadFromFile("Screenshot_10.png");
     Memo1->Clear();
     Memo1->Text="Militsiya (lotincha militia - 'qo'shin') O'zbekiston, Ukraina va boshqa ba’zi mamlakatlardagi ijroiya hukumatga tegishli huquq-tartibot organlarining umumiy nomidir. Rossiya huquq-tartibot organlari 2011-yil 1-martidan e'tiboran politsiya deb nomlanmoqda. Abkhazia Abxaziya, Belarus, Transnistria Dnestroldi, Tojikiston, South Ossetia Janubiy Osetiya, Ukraina, O'zbekiston";
     break;


     }

}
//---------------------------------------------------------------------------
