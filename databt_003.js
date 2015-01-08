/*
Script que permite recibir los datos por el COM que se asigna para el vinculo Bluetooth entre el modulo hc05
y el portatil. Los datos son recibidos vía bluetooth son provenientes del hc05 y estos luego se imprimen 
en la consola.
*/

var SerialPort = require("serialport").SerialPort;
var serialport = new SerialPort("COM4", {
  baudRate: 9600,
  dataBits: 8,
  parity: 'none',
  stopBits: 1,
  flowControl: false
});

serialport.on('open', function () {
  console.log('Puerto Abierto');
});

serialport.on('data', function(data) {
  console.log(data.toString());
});
