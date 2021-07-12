#include <stdio.h> // fatal error: 'stdio' file not found - .h silersem
// error: invalid preprocessing directive "hata: geçersiz ön işleme yönergesi"- #include yazarsam

int main(void)//) silersem false_all.c:9:2: error: expected function body after function declarator - işlev bildiricisinden sonra beklenen işlev gövdesi
{
    printf("Hello, "); //  error: extraneous ')' before ';' fazlalilik parantezde bu hata // extraneous ~  gereksiz 
    printf("World!");//warning: format string is not a string literal (potentially insecure) [-Wformat-security] ~ uyarı: biçim dizesi bir dize değişmezi değildir (potansiyel olarak güvensiz) [- wformat-security]
    //tek tirnak kullanilirsa yukaridaki hata gelir!
    printf("\n");//warning: missing terminating '"' character [-Winvalid-pp-token] ~ uyarı: eksik sonlandırma '"' karakter [- Winvalid-pp-token]
    return (0);
}