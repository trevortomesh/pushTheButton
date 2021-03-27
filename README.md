# Push The Button
Push The Button is a horror game with a single button. 

Schematic:

```text

       ┌──────────────┐                 ██▓███   █    ██   ██████  ██░ ██
       │              │                ▓██░  ██▒ ██  ▓██▒▒██    ▒ ▓██░ ██▒
       │              │                ▓██░ ██▓▒▓██  ▒██░░ ▓██▄   ▒██▀▀██░
       │        pin 10├──────┐         ▒██▄█▓▒ ▒▓▓█  ░██░  ▒   ██▒░▓█ ░██
       │              │      │         ▒██▒ ░  ░▒▒█████▓ ▒██████▒▒░▓█▒░██▓
       │              │      │         ▒▓▒░ ░  ░░▒▓▒ ▒ ▒ ▒ ▒▓▒ ▒ ░ ▒ ░░▒░▒
       │           GND├──┬──---──┐     ░▒ ░     ░░▒░ ░ ░ ░ ░▒  ░ ░ ▒ ░▒░ ░
       │              │  │   │   │     ░░        ░░░ ░ ░ ░  ░  ░   ░  ░░ ░
       │   Arduino    │  < r1│   │                 ░           ░   ░  ░  ░
       │    micro     │  >   │   │
       │              │  │   │   │     ▄▄▄█████▓ ██░ ██ ▓█████
       │         pin 4├──┤   │   │     ▓  ██▒ ▓▒▓██░ ██▒▓█   ▀
       │              │  │   │   │     ▒ ▓██░ ▒░▒██▀▀██░▒███
       │              │  │   │   │     ░ ▓██▓ ░ ░▓█ ░██ ▒▓█  ▄
┌──────┤5v            │  │   │   │       ▒██▒ ░ ░▓█▒░██▓░▒████▒
│      │              │  │   │   │       ▒ ░░    ▒ ░░▒░▒░░ ▒░ ░
│      │              │  │   │   │         ░     ▒ ░▒░ ░ ░ ░  ░
│      │              │  │   │   │       ░       ░  ░░ ░   ░
│      └──────────────┘  │   │   │               ░  ░  ░   ░  ░
│                        │   │   │
│           speaker      │   │   │      ▄▄▄▄    █    ██ ▄▄▄█████▓▄▄▄█████▓ ▒█████   ███▄    █
│             xxx        │   │   │     ▓█████▄  ██  ▓██▒▓  ██▒ ▓▒▓  ██▒ ▓▒▒██▒  ██▒ ██ ▀█   █
│            x   x       │   │   │     ▒██▒ ▄██▓██  ▒██░▒ ▓██░ ▒░▒ ▓██░ ▒░▒██░  ██▒▓██  ▀█ ██▒
│           x     x      │   │   │     ▒██░█▀  ▓▓█  ░██░░ ▓██▓ ░ ░ ▓██▓ ░ ▒██   ██░▓██▒  ▐▌██▒
│      ┌────x  x  x──────┼───┘   │     ░▓█  ▀█▓▒▒█████▓   ▒██▒ ░   ▒██▒ ░ ░ ████▓▒░▒██░   ▓██░
│      │    x     x      │       │     ░▒▓███▀▒░▒▓▒ ▒ ▒   ▒ ░░     ▒ ░░   ░ ▒░▒░▒░ ░ ▒░   ▒ ▒
│      │     x   x       │       │     ▒░▒   ░ ░░▒░ ░ ░     ░        ░      ░ ▒ ▒░ ░ ░░   ░ ▒░
│      │      xxx        │       │      ░    ░  ░░░ ░ ░   ░        ░      ░ ░ ░ ▒     ░   ░ ░
│      │                 │       │      ░         ░                           ░ ░           ░
│      │                 │       │           ░        A SINGLE BUTTON HORROR GAME
│      │        |        │       │                        FOR ARDUINO MICRO
│      │     o─────o     │       │    Parts List:
│      │                 │       │                       BY TREVOR M TOMESH
└─────---────o     o─────┘       │    - 1 arduino micro
       │                         │    - 1 pushbutton
       │   pushbutton            │    - 1 speaker/buzzer
       │                         │    - 1 resistor (any value)
       └─────────────────────────┘
 
```

