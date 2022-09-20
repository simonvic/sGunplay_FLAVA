modded class AimingModelFilterInertia {
	override float computeInertiaMultiplier() {
		float m = super.computeInertiaMultiplier();
		if (getWeapon().IsBipodDeployed() && getWeapon().Bipod().IsBipodInUse()) {
			return 0;
		}
		return m;
	}
}