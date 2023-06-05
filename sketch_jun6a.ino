void setup() {
  Serial.begin(9600);  // 初始化串口通信，波特率设置为9600
  dht.begin();
}

void loop() {
  delay(2000);  // 延迟2秒钟

  float temperature = dht.readTemperature();  // 读取温度值（摄氏度）
  float humidity = dht.readHumidity();  // 读取湿度值（相对湿度）

  Serial.print("温度：");
  Serial.print(temperature);
  Serial.print(" °C");

  Serial.print("  湿度：");
  Serial.print(humidity);
  Serial.println(" %");
}
