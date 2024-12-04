Here's the entire markdown content in one block:

```markdown
# minitalk

## Overview
`minitalk` is a simple client-server communication program using Unix signals. The project involves a server and a client communicating through signals to send messages. The program includes an optional bonus mode where the server sends a signal back to the client to acknowledge that a message has been received.

---

## Repository
GitHub: [minitalk](https://github.com/Raainshe/minitalk)

---

## Compilation
To compile the project, use the provided `Makefile`.  

1. **Basic Version**:  
   Run the following command to compile the standard version:
   ```bash
   make
   ```

This creates the server and client executables in the project directory.

2. **Bonus Version**: To compile the version with acknowledgment signals, run:
   ```bash
   make bonus
   ```

## Usage
### Run the Server
Start the server to begin receiving messages:
```bash
./server
```

The server will output its Process ID (PID), which will be used to send messages from the client.

### Run the Client
Use the client program to send a message to the server. Pass the server's PID and your message as arguments:
```bash
./client <PID> "Your message goes here."
```

**Example:**
```bash
./client 1234 "My message to the server goes here."
```

## Features
### Basic Mode
* The client sends a message to the server using Unix signals.

### Bonus Mode
* The server sends a signal back to the client to confirm receipt of the message.

## Contributing
Contributions, suggestions, and bug reports are welcome. Feel free to open an issue or submit a pull request.

## License
This project is licensed under the MIT License. Feel free to use and modify it.

## Author
Developed by Ryan Makoni. If you have any questions or feedback, feel free to reach out.
