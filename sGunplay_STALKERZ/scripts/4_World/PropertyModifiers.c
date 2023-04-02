modded class PropertyModifiers {
	override void UpdateModifiers() {
		super.UpdateModifiers();

		recoilControlMouseX        = PropertyModifiers.getModifierFloat(m_OwnerItem, "s_recoilControlMouseX");
		recoilControlMouseY        = PropertyModifiers.getModifierFloat(m_OwnerItem, "s_recoilControlMouseY");
		recoilControlHandsX        = PropertyModifiers.getModifierFloat(m_OwnerItem, "s_recoilControlStabilityX");
		recoilControlHandsY        = PropertyModifiers.getModifierFloat(m_OwnerItem, "s_recoilControlStabilityY");		
		recoilControlMisalignmentX = PropertyModifiers.getModifierFloat(m_OwnerItem, "s_recoilControlMisalignmentX");
		recoilControlMisalignmentY = PropertyModifiers.getModifierFloat(m_OwnerItem, "s_recoilControlMisalignmentY");		
		recoilControlKick          = PropertyModifiers.getModifierFloat(m_OwnerItem, "s_recoilControlKick");

		for (int i = 0; i < m_OwnerItem.GetInventory().AttachmentCount(); i++) {
			applyAttachmentModifiers(m_OwnerItem.GetInventory().GetAttachmentFromIndex(i));
		}

		recoilControlMouseX        = Math.Clamp(recoilControlMouseX, -1, 1);
		recoilControlMouseY        = Math.Clamp(recoilControlMouseY, -1, 1);
		recoilControlHandsX        = Math.Clamp(recoilControlHandsX, -1, 1);
		recoilControlHandsY        = Math.Clamp(recoilControlHandsY, -1, 1);
		recoilControlMisalignmentX = Math.Clamp(recoilControlMisalignmentX, -1, 1);
		recoilControlMisalignmentY = Math.Clamp(recoilControlMisalignmentY, -1, 1);
		recoilControlKick          = Math.Clamp(recoilControlKick, -1, 1);
	}
}