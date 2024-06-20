#include "oled.h"

namespace esphome {
namespace oled {

static const char *TAG = "oled.component";

void Oled::setup() {


}

void Oled::loop() {

}

void Oled::dump_config(){
    ESP_LOGI(TAG, "Empty component");
}

void Oled::printSomething() {
    U8G2_SSD1306_128X64_NONAME_1_SW_I2C u8g2moo (U8G2_R0, 9, 8, U8X8_PIN_NONE);
    u8g2moo.begin();
    u8g2moo.firstPage();
      do {
    u8g2moo.setFont(u8g2_font_t0_11_tf);
    u8g2moo.drawStr(0,12,"Hello World!");
    
    u8g2moo.setFont(u8g2_font_t0_11b_tf);
    u8g2moo.drawStr(0,24,"Hello World!");
    
    u8g2moo.setFont(u8g2_font_NokiaSmallPlain_tf);
    u8g2moo.drawStr(0,37,"Hello World!");
    
    u8g2moo.setFont(u8g2_font_NokiaSmallBold_tf);
    u8g2moo.drawStr(0,50,"Hello World!");

    u8g2moo.setFont(u8g2_font_lucasfont_alternate_tf);
    u8g2moo.drawStr(0,64,"Hello World!");

  } while ( u8g2moo.nextPage() );
}


}  // namespace oled
}  // namespace esphome