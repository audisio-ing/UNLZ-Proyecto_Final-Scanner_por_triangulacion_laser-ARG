// Pines digitales para el MA211F
const int doPin  = 2; // DO
const int dobPin = 3; // DOB
const int fgPin  = 4; // FG (opcional, tacómetro)

int lastState = -1; // Guarda el último estado detectado (-1 = sin inicializar)

void setup() {
  Serial.begin(9600);

  // Configurar como entradas (pull-ups externas de 1k ya conectadas)
  pinMode(doPin, INPUT);
  pinMode(dobPin, INPUT);
  pinMode(fgPin, INPUT);

  Serial.println("MA211F - Lectura de Estado A/B");
}

void loop() {
  int doValue  = digitalRead(doPin);
  int dobValue = digitalRead(dobPin);

  int currentState;

  // Determinar estado actual
  if (doValue == LOW && dobValue == HIGH) {
    currentState = 0; // Estado A
  } else if (doValue == HIGH && dobValue == LOW) {
    currentState = 1; // Estado B
  } else {
    // Si por alguna razón no es válido, salir sin cambiar estado
    return;
  }

  // Detectar cambio de estado
  if (currentState != lastState) {
    if (currentState == 0) {
      Serial.println("Estado A");
    } else {
      Serial.println("Estado B");
    }
    lastState = currentState;
  }
}
