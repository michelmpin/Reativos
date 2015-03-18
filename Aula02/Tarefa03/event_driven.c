/* Controlador de eventos para apenas 1 botão
   Para mais botões, usar lista */
/* Funções de registro */

int pin;

void button_listen(int inPin){
	// pin passado deve gerar notificações
        pin = inPin;
	pinMode(pin, INPUT);
        Serial.print("Registrado botão no pino ");
        Serial.println(pin);
}

void timer_set(int ms){
	// timer deve expirar após "ms" milissegundos
	
}

/* Callbacks */
void button_changed(int pin, int v);
void timer_expired(void);

/* Programa principal */

void setup(){
	//inicialização da API
	Serial.begin(9600);
	//inicialização do usuário
	init();
}

void loop(){
	//detecta novos eventos de botão
        int a = digitalRead(pin);
        if(a){
  	    //notifica o usuário
            Serial.print("Botão do pino ");
            Serial.print(pin);
            Serial.println(" acionado");
    	    button_changed(pin,a);
         }
	//detecta novos eventos de timer
	
	//notifica o usuário
	timer_expired();
}
