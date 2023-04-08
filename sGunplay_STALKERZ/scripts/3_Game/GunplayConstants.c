modded class GunplayConstants {

	///////////////////
	// PLAYER INVENTORY WEIGHT
	// the player inventory weight will contribute to the recoil control. Set all values to 0 to disable
	static const float RECOIL_CONTROL_INVENTORY_WEIGHT_OVERLOADED  = -0.80;  // @see INVENTORY_WEIGHT_GRAMS_OVERLOADED
	static const float RECOIL_CONTROL_INVENTORY_WEIGHT_HEAVY       = -0.75;  // @see INVENTORY_WEIGHT_GRAMS_HEAVY
	static const float RECOIL_CONTROL_INVENTORY_WEIGHT_MEDIUM      = -0.50;  // @see INVENTORY_WEIGHT_GRAMS_MEDIUM
	static const float RECOIL_CONTROL_INVENTORY_WEIGHT_LIGHT       = -0.25;  // @see INVENTORY_WEIGHT_GRAMS_LIGHT
	static const float RECOIL_CONTROL_INVENTORY_WEIGHT_VERYLIGHT   =  0.00;  // @see INVENTORY_WEIGHT_GRAMS_VERYLIGHT
}
