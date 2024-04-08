RUNTIME_DATA_FILE_BEGIN(forcecore_option.enc)

RUNTIME_DATA_TYPE_BEGIN(ForceCoreBase, "cabal.force_core.code", 64)
	RUNTIME_DATA_PROPERTY(RTDataItemType, Type, "type")
	RUNTIME_DATA_PROPERTY(RTDataItemTypeGrade, ItemGrade, "type")
	RUNTIME_DATA_TYPE_BEGIN_CHILD(ForceCoreBaseCode, "cont", 16)
		RUNTIME_DATA_PROPERTY(Int32, ForceIndex, "index")
		RUNTIME_DATA_PROPERTY(Int32, ForceEffectIndex, "code")
		RUNTIME_DATA_PROPERTY(Int32, ForceLevel, "force_level")
		RUNTIME_DATA_PROPERTY(Int32, HasRandomRate, "randomrate_exist")
	RUNTIME_DATA_TYPE_END_CHILD(ForceCoreBaseCode, 16)
RUNTIME_DATA_TYPE_END(ForceCoreBase)

RUNTIME_DATA_TYPE_BEGIN(ForceCodeEquipment, "cabal.force_core.force_code_equip", 512)
	RUNTIME_DATA_PROPERTY(Int32, ForceEffectIndex, "code")
	RUNTIME_DATA_PROPERTY(Int32, ForceLevel, "CoreNum")
	RUNTIME_DATA_PROPERTY(Int32, Grade1, "grade1")
	RUNTIME_DATA_PROPERTY(Int32, Grade2, "grade2")
	RUNTIME_DATA_PROPERTY(Int32, Grade3, "grade3")
	RUNTIME_DATA_PROPERTY(Int32, Grade4, "grade4")
	RUNTIME_DATA_PROPERTY(Int32, Grade5, "grade5")
	RUNTIME_DATA_PROPERTY(Int32, Grade6, "grade6")
	RUNTIME_DATA_PROPERTY(Int32, Grade7, "grade7")
	RUNTIME_DATA_PROPERTY(Int32, Grade8, "grade8")
	RUNTIME_DATA_PROPERTY(Int32, Grade9, "grade9")
	RUNTIME_DATA_PROPERTY(Int32, Grade10, "grade10")
	RUNTIME_DATA_PROPERTY(Int32, Grade11, "grade11")
	RUNTIME_DATA_PROPERTY(Int32, Grade12, "grade12")
	RUNTIME_DATA_PROPERTY(Int32, Grade13, "grade13")
	RUNTIME_DATA_PROPERTY(Int32, Grade14, "grade14")
	RUNTIME_DATA_PROPERTY(Int32, Grade15, "grade15")
RUNTIME_DATA_TYPE_END(ForceCodeEquipment)

RUNTIME_DATA_FILE_END

RUNTIME_DATA_FILE_BEGIN(EpicOptionPool.xml)

RUNTIME_DATA_TYPE_BEGIN(EpicOptionPool, "EpicOptionPool.Pool", 128)
	RUNTIME_DATA_PROPERTY(Int32, Index, "id")
	RUNTIME_DATA_TYPE_BEGIN_CHILD(EpicOptionPoolValue, "Epic", 8)
		RUNTIME_DATA_PROPERTY(Int32, EpicOption, "id")
		RUNTIME_DATA_PROPERTY(Int32, EpicGrade, "grade")
		RUNTIME_DATA_PROPERTY(Int32, Rate, "rate")
	RUNTIME_DATA_TYPE_END_CHILD(EpicOptionPoolValue, 32)
RUNTIME_DATA_TYPE_END(EpicOptionPool)
RUNTIME_DATA_TYPE_INDEX(EpicOptionPool, Int32, Index)

RUNTIME_DATA_FILE_END