# Fan DHT11 Relay
This is a system dht11 based for monitoring temperature and humidity indoor and turn on/off an electronic device. 

It has been developed to report bad conditions based on the humidity that should be max 60% and temp between 22-23°C.

There are three operating cases:

* Too hot: Temp over 24°C, turn on relay.

* Hot and hight humidity: Humidity over 55% AND temp over 23°C

* Hight humidity and not cold: Temperature over 22°C AND humidity over 60%. 

## Prototype Layout
If you want to run sketch in this repository, you can connect components like this.

<p align="center">
  <img src="https://github.com/GiuseppeLG/Fan-DHT11-Relay/blob/master/prototype_layout.PNG" height="700" title="hover text">
</p>

## Config
You can change the range of relay action simply edit conditions like this and replace the number of temp or humidity:
```c++
if ((sensor.temperature) >= 24.00){
    digitalWrite(rele1, HIGH);
  }
```
I recommend leaving the delay time to 10 sec, both for energy saving and to ensure the long-lasting operation of the prototype.

## Limitations and future developments

It's a project focused on using a constant speed fan floor. A future development may be the addition of 2-3 relays to control the fan speed. Personally I don't prefer the fan too fast because it can be harmful to health.

## Contributing
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

Please make sure to update tests as appropriate.

## License
This software is free.
[GPL](http://www.gnu.org/licenses/gpl.html)
