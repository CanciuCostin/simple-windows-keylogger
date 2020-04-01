# Simple Windows Keylogger

Simple Windows keylogger using C language.

### Description

* Record key strokes and save logs to a text file
* The keylogger is visible in task manager
* The process is detached though, so the console does not open

### Recorded keys

* Letters: **a-z, A-Z**
* Digits & shifted digits: **0-9, [!@#$%^&*()]**
* Special characters (shifted & not shifted): **[`-=[]\;',./], [~_+{}|:"<>?]**
* Special keys: **SPACE, ENTER, CTR, ALT, etc.**

### Customize

* The default log file is set to the relative path of the project:
```
#define LOG_FILE "KeyLogs.txt"
```
* **InputKeyHelper** can be modified to change key recording logic
