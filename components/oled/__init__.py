import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.const import CONF_ID, CONF_SDA, CONF_SCL, CONF_ADDRESS
from esphome import pins

empty_component_ns = cg.esphome_ns.namespace('oled')
OledComponent = empty_component_ns.class_("Oled", cg.Component)

CONF_OLED = "OledComponent"

MULTI_CONF = True

CONFIG_SCHEMA = cv.Schema({
    #cv.GenerateID(): cv.declare_id(OledComponent),
    cv.Required(CONF_ID): cv.declare_id(OledComponent), 
    cv.Required(CONF_SDA): pins.internal_gpio_output_pin_number,
    cv.Required(CONF_SCL): pins.internal_gpio_output_pin_number,
    cv.Optional(CONF_ADDRESS, default=0x3C): cv.i2c_address, 
}).extend(cv.COMPONENT_SCHEMA)

def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    yield cg.register_component(var, config)