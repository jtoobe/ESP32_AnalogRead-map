/* lee un valor analogico y "mapea" la salida entre 0 y 100 */

int sensor=33;
int valor = 0;

void setup()
{
    Serial.begin(115200);
}
void loop()
{
    int valor = map(analogRead(sensor), 0, 4095, 100, 0);
    //se hace un mapeo de la lectura del sensor a porcentual
    Serial.print("Valor de salida funcion map : ");
    Serial.print(valor);
    Serial.println("Valor en crudo : ");
     Serial.print(analogRead(sensor));
    delay(1000);
}
