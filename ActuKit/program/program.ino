// パルス出力ピン
const int pulsePin = 0;

// 動作周波数
constexpr float freq = 151.5; // 151.5
constexpr float duty = 50.0;  // 0 to 100.

constexpr int onTime = (1000000 / freq) * (duty / 100);  // [us]
constexpr int offTime = (1000000 / freq) * ((100 - duty) / 100); // [us]

void setup() {
  // 出力設定.
  pinMode(pulsePin, OUTPUT);
  pinMode(LED_RED, OUTPUT);
}

void loop() {
  // HIGH.
  analogWrite(pulsePin, 255);
  delayMicroseconds(onTime);

  // LOW.
  analogWrite(pulsePin, 0);
  delayMicroseconds(offTime);
}
