
enum aylar { ocak=1, �ubat, mart, nisan,may�s,haziran};

int main (void){
	int ay;
	pust("ay numars�n� giriniz :");
	scanf("%d", & ay );
	
	switch (ay){
		case ocak    : puts ("ocak")             ;     break;
		case �ubat   : puts ("�ubat")            ;    break;
		case mart    : puts ("mart")             ;     break;
		case nisan   : puts ("nisan")           ;    break;
		case may�s   : puts ("may�s")           ;    break;
		case haziran : puts ("haziran")         ;      break;
		default      : puts ("ge�ersiz say�")   ;     break;
		
		
	};
}

