

#include "main.h"




typedef  enum {
	CTRL_REG1_A = 0x20,
	CTRL_REG2_A,
	CTRL_REG3_A,
	CTRL_REG4_A,
	CTRL_REG5_A,
	CTRL_REG6_A,
	REFERENCE_A,
	STATUS_REG_A,
	OUT_X_L_A,
	OUT_X_H_A,
	OUT_Y_L_A,
	OUT_Y_H_A,
	OUT_Z_L_A,
	OUT_Z_H_A,
}LSM303DLHC_reg;

uint8_t DevAddress = 0b0011110;

void write_LSM_reg(I2C_HandleTypeDef *hi2c,LSM303DLHC_reg reg,uint8_t data){
	uint8_t buffer[2];
	buffer[0] = reg;
	buffer[1] = data;
	HAL_I2C_Master_Transmit(hi2c, DevAddress, buffer, 2, HAL_MAX_DELAY);
}
void read_LSM_reg(LSM303DLHC_reg reg,uint8_t* buffer,uint8_t buffer_size){

}
