# Intro
What's going on and welcome! Michael T here. I have a quick tip bit for you on how to modify and control a mega Nerf gun.

[![Video](https://img.youtube.com/vi/VALZsQVNEaw/maxresdefault.jpg)](http://www.youtube.com/watch?v=VALZsQVNEaw)

# Credits

I Don’t Need It by Liam.M @liammmusic

Music provided by Free Music for Vlogs youtu.be/-2TVjuzOKfg

# First we need to get a Mega Nerf gun.

I got this one from local Walmart for about 5 bucks Next, take out these 8 screws and note one of them is fake.  Take out the ones on top and follow by the bottom ones.  The shell of the gun should just separate easily. Like the final minute of a bad tinder date.


For the real meat, we have the real the gun. The outside is for looking cool and what important is the inside.  Next you want to thread through the trigger of gun. Then we can pull on it from the end of the barrel. We need to snip off the shell to let the cable pass through. And leave of some space for the trigger. Now, close her backup and give it a tug at the end.


We can still preserve the benefit of using it as a regular Nerf gun. Next you want to 3D print this servo mount adaptor, it can also be mounted to the end of the Nerf gun. I will link the STL file down below.


[![Preview 1](https://github.com/DownloadTheBearCompany/TechBitSimpleTrigger/raw/master/preview1.png)](https://render.githubusercontent.com/view/solid?commit=34a135b6feb47c355c393d6b15aa1236803b5788&amp;enc_url=68747470733a2f2f7261772e67697468756275736572636f6e74656e742e636f6d2f446f776e6c6f616454686542656172436f6d70616e792f5465636842697453696d706c65547269676765722f333461313335623666656234376333353563333933643662313561613132333638303362353738382f657874656e73696f6e2e73746c&amp;nwo=DownloadTheBearCompany%2FTechBitSimpleTrigger&amp;path=extension.stl&amp;repository_id=136811711&amp;repository_type=Repository#d813bce9-0cb8-4724-87f6-5210efc17bde)

# [STL file](https://github.com/DownloadTheBearCompany/TechBitSimpleTrigger/blob/master/extension.stl)

Thread the servo horn through the cable and tide a knot at the end. Mount the servo to the adaptor and it should look something like this.  Upload a simple firing program to the Arduino. Connect the servo to 3v and the signal wire to pin 3.


```C
#include <Servo.h>

Servo servo;


void setup() {

  Serial.begin(115200);
  servo.attach(3);
}

void loop() {

  Serial.println(servol.read());
  servo.write(115);
  delay(5000);
  servo.write(60);
  while (true) {}
}
```

# Power up everything!

Hopefully it will give you some inspirations on adding Nerf gun to your next project. As always, see you next week with Michael!
