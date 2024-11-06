# Deribit_backend


This project is an order execution and management system designed to interact with the Deribit Test platform's APIs. It includes functionalities for placing, canceling, and modifying orders, fetching the order book, and viewing current positions.

## Project Structure

- `.vscode/` - Contains configuration files for Visual Studio Code.
- `.env` - Stores environment variables like `CLIENT_ID` and `CLIENT_SECRET`.
- `DeribitClient` - The compiled executable or script for running the client.
- `RestClient.cpp` / `RestClient.h` - Contains the `RestClient` class, responsible for making API calls.
- `env_loader.cpp` / `env_loader.h` - Handles loading environment variables from the `.env` file.
- `json.hpp` - A header-only library for parsing and handling JSON data.
- `main.cpp` - The main entry point of the application.
- `build.sh` - A script to build the project.

## Getting Started

### Prerequisites

Ensure you have the following installed:

- GCC or any C++11 compatible compiler
- Make (optional)
- A terminal or command prompt
- A text editor or IDE (Visual Studio Code recommended)

### Setup

1. **Clone the repository**:
    ```bash
    git clone <repository-url>
    cd <repository-name>
    ```

2. **Set up environment variables**:
    - Create a `.env` file in the root directory.
    - Add your `CLIENT_ID` and `CLIENT_SECRET` to the file:
      ```
      CLIENT_ID=your_client_id
      CLIENT_SECRET=your_client_secret
      ```

3. **Build the project**:
    - Run the `build.sh` script:
      ```bash
      ./build.sh
      ```

### Running the Project

After building the project, you can run the executable:

```bash
./DeribitClient
```

## Features

- **Order Management**: Place, cancel, and modify orders.
- **Market Data**: Fetch the current order book.
- **Position Tracking**: View current positions across various symbols.

## Troubleshooting

- Ensure your `.env` file is correctly set up.
- Verify that the API endpoints and credentials are correct.
- Check for proper network connectivity to the Deribit Test platform.

## License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## Acknowledgments

- [nlohmann/json](https://github.com/nlohmann/json) for the JSON parsing library.
```
