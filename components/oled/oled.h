#pragma once

#include "esphome/core/component.h"
#include "esphome/core/log.h"

#include <U8g2lib.h>



namespace esphome {
namespace oled {

class Oled : public Component {
 public:
  void setup() override;
  void loop() override;
  void dump_config() override;
  void printSomething();
};


}  // namespace empty_component
}  // namespace esphome