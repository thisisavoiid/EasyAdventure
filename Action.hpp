#pragma once

#include <memory>
#include <string>
#include <vector>
#include "ActionEvent.hpp"
#include "ItemKey.hpp"

class Action {
public:
	std::string m_name;
	std::vector<std::shared_ptr<ActionEvent>> m_events;
	std::vector<E_ITEM_KEY> m_requiredItems;

	void Invoke();
	bool IsAllowed();

	Action(
		std::string a_name,                                 
		std::vector<std::shared_ptr<ActionEvent>> a_events, 
		E_ITEM_KEY a_itemRequired = E_ITEM_KEY::IK_ANY      
	);

	Action(
		std::string a_name,                                 
		std::shared_ptr<ActionEvent> a_event,               
		E_ITEM_KEY a_itemRequired = E_ITEM_KEY::IK_ANY      
	);

	Action(
		std::string a_name,                                 
		std::vector<std::shared_ptr<ActionEvent>> a_events, 
		std::vector<E_ITEM_KEY> a_itemsRequired             
	);

	Action(
		std::string a_name,                                 
		std::shared_ptr<ActionEvent> a_event,               
		std::vector<E_ITEM_KEY> a_itemsRequired             
	);
};
