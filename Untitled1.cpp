
enum aylar { ocak=1, şubat, mart, nisan,mayıs,haziran};

int main (void){
	int ay;
	pust("ay numarsını giriniz :");
	scanf("%d", & ay );
	
	switch (ay){
		case ocak    : puts ("ocak")             ;     break;
		case şubat   : puts ("şubat")            ;    break;
		case mart    : puts ("mart")             ;     break;
		case nisan   : puts ("nisan")           ;    break;
		case mayıs   : puts ("mayıs")           ;    break;
		case haziran : puts ("haziran")         ;      break;
		default      : puts ("geçersiz sayı")   ;     break;
		
		
	};
}

