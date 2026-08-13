// Khai báo các chân kết nối theo sơ đồ mạch
const int trigPin = 6;
const int echoPin = 5;
const int buzzerPin = 3;

void setup() {
  // Khởi tạo cổng Serial
  Serial.begin(9600);
  
  // Cài đặt chế độ cho các chân
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT); 
}

void loop() {
  long duration;
  int distance;

  // 1. Gửi 1 xung siêu âm
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // 2. Đo thời gian xung phản hồi lại
  duration = pulseIn(echoPin, HIGH);

  // 3. Tính toán khoảng cách ra centimet
  distance = duration * 0.034 / 2;

  // In kết quả ra Serial Monitor
  Serial.print("Khoang cach: ");
  Serial.print(distance);
  Serial.println(" cm");

  // 4. Điều khiển Active Buzzer
  if (distance > 0 && distance <= 30) {
    digitalWrite(buzzerPin, HIGH); // Cấp điện để còi kêu
  } else {
    digitalWrite(buzzerPin, LOW);  // Ngắt điện để tắt còi
  }

  // Chờ 100 mili giây trước khi thực hiện lần đo tiếp theo
  delay(100); 
}