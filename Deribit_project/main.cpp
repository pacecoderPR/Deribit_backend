
#include "env_loader.h"
#include "RestClient.h"
#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    // Load environment variables from .env file
   
    loadEnv(".env");

    // Retrieve environment variables
    const std::string clientId = std::getenv("CLIENT_ID");
    const std::string clientSecret = std::getenv("CLIENT_SECRET");
    const std::string baseUrl = "https://test.deribit.com";
   

    // Check if environment variables are loaded correctly
    if (clientId.empty() || clientSecret.empty()) {
        std::cerr << "Error: CLIENT_ID or CLIENT_SECRET not set in environment variables." << std::endl;
        return 1;
    }

    // Create RestClient object
    RestClient client(clientId, clientSecret, baseUrl);

    try {
        // Authenticate
       
        client.authenticate();

        // Create a buy order
        // json buy_obj = {
        //     {"amount", "30"},
        //     {"instrument_name", "BTC-PERPETUAL"},
        //     {"type", "limit"},
        //     {"price","10"}
        // };

        // try {
        //     // Place a buy order
        //     json buyResponse = client.buy(buy_obj);
        //     std::cout << "Order placed: " << buyResponse.dump(4) << std::endl;
        // } catch (const std::exception& e) {
        //     std::cerr << "Error in placing order: " << e.what() << std::endl;
        // }

        // Modify an order 
        
        // json modifyParams = {
        //     {"amount", "10"},
        //     {"order_id", "29178118600"},
        //     // {"price", "0.21"}
        // };


        // try {
        //     json modifyResponse = client.modifyOrder(modifyParams);
        //     std::cout << "Order modified: " << modifyResponse.dump(4) << std::endl;
        // } catch (const std::exception& e) {
        //     std::cerr << "Error in modifying order: " << e.what() << std::endl;
        // }
        

        // Cancel an order 
        
        // std::string order_id = "29178118600";
        // try {
        //     json cancelResponse = client.cancelOrder(order_id);
        //     std::cout << "Order canceled: " << cancelResponse.dump(4) << std::endl;
        // } catch (const std::exception& e) {
        //     std::cerr << "Error in canceling order: " << e.what() << std::endl;
        // }
        

        // Get order book 
        
        // try {
        //     json orderBookResponse = client.getOrderBook("BTC-PERPETUAL", 5);
        //     std::cout << "Order Book: " << orderBookResponse.dump(4) << std::endl;
        // } catch (const std::exception& e) {
        //     std::cerr << "Error in getting order book: " << e.what() << std::endl;
        // }
        

        // Get positions
        
        json positionParams = {
            {"currency", "BTC"},
            {"kind", "future"}
        };

        try {
            json positionsResponse = client.getPositions(positionParams);
            std::cout << "Positions: " << positionsResponse.dump(4) << std::endl;
        } catch (const std::exception& e) {
            std::cerr << "Error in getting positions: " << e.what() << std::endl;
        }
        

    } catch (const std::exception& e) {
        std::cerr << "General error: " << e.what() << std::endl;
    }

    return 0;
}
