modded class ItemBase {
	
	override void EEItemAttached(EntityAI item, string slot_name) {
		super.EEItemAttached(item, slot_name);
		updatePropertyModifiers();
	}
	
	override void EEItemDetached(EntityAI item, string slot_name) {
		super.EEItemDetached(item, slot_name);
		updatePropertyModifiers();
	}
	
	// TODO this is dumb, do it properly :)
	protected void updatePropertyModifiers() {
		Weapon_Base weapon;
		if (Class.CastTo(weapon, GetHierarchyParent())) {
			weapon.GetPropertyModifierObject().UpdateModifiers();
		}
	}
}