/*
 * Leetcode problem 121
 * You're given an array of 'prices' where 'prices[i]'
 * is the price of a given stock on the 'i'th day.
 * Maximise your profit by choosing a single day to buy one stock
 * and choosing a different day in the future to sell that stock.
 * Return the maximum profit you can achieve from this transaction.
 * If you cannot achieve any profit, return 0.
*/

#include <iostream>
#include <vector>
#include <algorithm>

int maxProfit(std::vector<int>& prices) {
	int profit = 0;
	int cheapestIdx = std::distance(prices.begin(), std::min_element(prices.begin(), prices.end()));
	int cheapest = prices[cheapestIdx];

	if (prices.size() != cheapestIdx + 1) {
		int priciest = prices[cheapestIdx+1];
		for (int i = cheapestIdx + 1; i < prices.size(); i++) {
			if (prices[i] > priciest) {
				priciest = prices[i];
			}
		}
		profit = priciest - cheapest;
	}
		
	return profit;
}

int main() {
	std::vector<int> prices1 = {7, 1, 5, 3, 6, 4};
	std::vector<int> prices2 = {7, 6, 4, 3, 1};
	std::cout << maxProfit(prices1) << "\n";
	std::cout << maxProfit(prices2) << std::endl;

	return 0;
}
