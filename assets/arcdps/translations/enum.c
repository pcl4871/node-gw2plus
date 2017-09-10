/* inc_lang.h */

enum m_translate {
	/* program */
	LANG_CORE = 1,

	/* common: professions */
	LANG_COMMON_PROF = 100,
	LANG_COMMON_PROF_GUARDIAN,
	LANG_COMMON_PROF_DRAGONHUNTER,
	LANG_COMMON_PROF_WARRIOR,
	LANG_COMMON_PROF_BERSERKER,
	LANG_COMMON_PROF_ENGINEER,
	LANG_COMMON_PROF_SCRAPPER,
	LANG_COMMON_PROF_RANGER,
	LANG_COMMON_PROF_DRUID,
	LANG_COMMON_PROF_THIEF,
	LANG_COMMON_PROF_DAREDEVIL,
	LANG_COMMON_PROF_ELEMENTALIST,
	LANG_COMMON_PROF_TEMPEST,
	LANG_COMMON_PROF_MESMER,
	LANG_COMMON_PROF_CHRONOMANCER,
	LANG_COMMON_PROF_NECROMANCER,
	LANG_COMMON_PROF_REAPER,
	LANG_COMMON_PROF_RECKONER,
	LANG_COMMON_PROF_HERALD,
	LANG_COMMON_PROF_FIREBRAND,
	LANG_COMMON_PROF_SPELLBREAKER,
	LANG_COMMON_PROF_HOLOSMITH,
	LANG_COMMON_PROF_SOULBEAST,
	LANG_COMMON_PROF_DEADEYE,
	LANG_COMMON_PROF_WEAVER,
	LANG_COMMON_PROF_MIRAGE,
	LANG_COMMON_PROF_SCOURGE,
	LANG_COMMON_PROF_RENEGADE,

	/* common: skill itemization */
	LANG_COMMON_SKILLS_TOTAL = 130,
	LANG_COMMON_SKILLS_H,
	LANG_COMMON_SKILLS_F,
	LANG_COMMON_SKILLS_ACTIVATIONS,
	LANG_COMMON_SKILLS_CANCELS,
	LANG_COMMON_SKILLS_WASTED,
	LANG_COMMON_SKILLS_HITSCOMPRESS,
	LANG_COMMON_SKILLS_HITSTOTAL,
	LANG_COMMON_SKILLS_NINETY,
	LANG_COMMON_SKILLS_FIFTY,
	LANG_COMMON_SKILLS_MOVING,
	LANG_COMMON_SKILLS_FLANKING,
	LANG_COMMON_SKILLS_CRITS,
	LANG_COMMON_SKILLS_VALUE,
	LANG_COMMON_SKILLS_MIN,
	LANG_COMMON_SKILLS_AVG,
	LANG_COMMON_SKILLS_MAX,
	LANG_COMMON_SKILLS_APXDMG,
	LANG_COMMON_SKILLS_OVERSTACK,
	LANG_COMMON_SKILLS_NOSKILLS,
	LANG_COMMON_SKILLS_REMOVED,
	LANG_COMMON_SKILLS_RESISTED,
	LANG_COMMON_SKILLS_GLANCE,
	LANG_COMMON_SKILLS_MISS,
	LANG_COMMON_SKILLS_NOTARGETS,

	/* common: generic */
	LANG_COMMON_ATT_HEADER = 155,
	LANG_COMMON_ATT_HOSTILE,
	LANG_COMMON_ATT_FRIENDLY,
	LANG_COMMON_DATATYPE_HEADER = 160,
	LANG_COMMON_DATATYPE_COMBAT,
	LANG_COMMON_DATATYPE_ACTIVE,
	LANG_COMMON_DIRECTION_HEADER = 165,
	LANG_COMMON_DIRECTION_OUTGOING,
	LANG_COMMON_DIRECTION_INCOMING,
	LANG_COMMON_DATASTYLE_HEADER = 170,
	LANG_COMMON_DATASTYLE_PERSECOND,
	LANG_COMMON_DATASTYLE_TOTAL,
	LANG_COMMON_DATASTYLE_PERCENT,
	
	/* panels: dps */
	LANG_PAN_PERSONALDPS_HEADER = 200,
	LANG_PAN_PERSONALDPS_OUT,
	LANG_PAN_PERSONALDPS_IN,
	LANG_PAN_PERSONALDPS_CBT,
	LANG_PAN_PERSONALDPS_ACT,
	LANG_PAN_PERSONALDPS_DAMAGE,
	LANG_PAN_PERSONALDPS_PHYS,
	LANG_PAN_PERSONALDPS_BUFF,
	LANG_PAN_PERSONALDPS_HEALING,
	LANG_PAN_PERSONALDPS_CRIT,
	LANG_PAN_PERSONALDPS_NINETY,
	LANG_PAN_PERSONALDPS_FIFTY,
	LANG_PAN_PERSONALDPS_EVADE,
	LANG_PAN_PERSONALDPS_BLOCK,
	LANG_PAN_PERSONALDPS_ABSORB,
	LANG_PAN_PERSONALDPS_INTERRUPT,
	LANG_PAN_PERSONALDPS_CURRENT,
	LANG_PAN_PERSONALDPS_HIST,
	LANG_PAN_PERSONALDPS_COMBAT,
	LANG_PAN_PERSONALDPS_PS,
	LANG_PAN_PERSONALDPS_DMG,
	LANG_PAN_PERSONALDPS_PERSONAL,
	LANG_PAN_PERSONALDPS_INTERVAL,
	LANG_PAN_PERSONALDPS_MILLISECONDS,
	LANG_PAN_PERSONALDPS_HISTLEFT,
	LANG_PAN_PERSONALDPS_HISTRIGHT,
	LANG_PAN_PERSONALDPS_SHIELDS,

	/* panels: skills */
	LANG_PAN_PERSONALSKILLS_HEADER = 240,
	LANG_PAN_PERSONALSKILLS_OUT,
	LANG_PAN_PERSONALSKILLS_IN,
	LANG_PAN_PERSONALSKILLS_ALL,
	LANG_PAN_PERSONALSKILLS_BUFFS,
	LANG_PAN_PERSONALSKILLS_PHYS,
	LANG_PAN_PERSONALSKILLS_SKREMOVE,
	LANG_PAN_PERSONALSKILLS_CURRENT,
	LANG_PAN_PERSONALSKILLS_HIST,
	LANG_PAN_PERSONALSKILLS_COMBAT,
	LANG_PAN_PERSONALSKILLS_PERSONAL,
	LANG_PAN_PERSONALSKILLS_INTERVAL,
	LANG_PAN_PERSONALSKILLS_MILLISECONDS,
	LANG_PAN_PERSONALSKILLS_HEADERSHORT,

	/* panels: target */
	LANG_PAN_TARGET_HEADER = 270,
	LANG_PAN_TARGET_LOGAUTO,
	LANG_PAN_TARGET_LOGMANUAL,
	LANG_PAN_TARGET_LOGNONE,
	LANG_PAN_TARGET_LOGUNAVAILABLE,
	LANG_PAN_TARGET_NOLOCK,
	LANG_PAN_TARGET_COMBAT,
	LANG_PAN_TARGET_RS,
	LANG_PAN_TARGET_DPS,
	LANG_PAN_TARGET_TTK,
	LANG_PAN_TARGET_START,
	LANG_PAN_TARGET_STOP,

	/* panels: healthbar */
	LANG_PAN_HEALTHBAR_HEADER = 290,
	LANG_PAN_HEALTHBAR_HP,

	/* panels: chcli */
	LANG_PAN_CHCLI_HEADER = 300,
	LANG_PAN_CHCLI_OUT,
	LANG_PAN_CHCLI_IN,
	LANG_PAN_CHCLI_ADPS,
	LANG_PAN_CHCLI_BUFFS,
	LANG_PAN_CHCLI_PHYS,
	LANG_PAN_CHCLI_CND,
	LANG_PAN_CHCLI_TOTAL,
	LANG_PAN_CHCLI_H,
	LANG_PAN_CHCLI_F,
	LANG_PAN_CHCLI_COMBAT,
	LANG_PAN_CHCLI_PS,
	LANG_PAN_CHCLI_DMG,
	LANG_PAN_CHCLI_DISABLED,
	LANG_PAN_CHCLI_SKREMOVE,
	LANG_PAN_CHCLI_CURRENT,
	LANG_PAN_CHCLI_HIST,
	LANG_PAN_CHCLI_AGREMOVE,
	LANG_PAN_CHCLI_CHCLI,
	LANG_PAN_CHCLI_INTERVAL,
	LANG_PAN_CHCLI_MILLISECONDS,
	LANG_PAN_CHCLI_PCT,
	LANG_PAN_CHCLI_NOPLAYERS,
	LANG_PAN_CHCLI_HISTLEFT,
	LANG_PAN_CHCLI_HISTRIGHT,

	/* panels: summary */
	LANG_PAN_SUMMARY_HEADER = 340,
	LANG_PAN_SUMMARY_CBTTIME,
	LANG_PAN_SUMMARY_ADPSOUT,
	LANG_PAN_SUMMARY_TGADPSOUT,
	LANG_PAN_SUMMARY_ADPSIN,
	LANG_PAN_SUMMARY_TGADPSIN,
	LANG_PAN_SUMMARY_CRIT,
	LANG_PAN_SUMMARY_NINETY,
	LANG_PAN_SUMMARY_FIFTY,
	LANG_PAN_SUMMARY_MOVING,
	LANG_PAN_SUMMARY_FLANK,
	LANG_PAN_SUMMARY_CANCELTIME,
	LANG_PAN_SUMMARY_RESCOUNT,
	LANG_PAN_SUMMARY_RESTIME,
	LANG_PAN_SUMMARY_DOWNCOUNT,
	LANG_PAN_SUMMARY_CLEANSEDOUT,
	LANG_PAN_SUMMARY_STRIPPEDOUT,
	LANG_PAN_SUMMARY_GLANCE,
	LANG_PAN_SUMMARY_EVADES,
	LANG_PAN_SUMMARY_INTERRUPTS,
	LANG_PAN_SUMMARY_MISSED,
	LANG_PAN_SUMMARY_DODGE,
	LANG_PAN_SUMMARY_HIST,
	LANG_PAN_SUMMARY_SQSHORT1,
	LANG_PAN_SUMMARY_SQSHORT2,
	LANG_PAN_SUMMARY_CLEANSEDIN,
	LANG_PAN_SUMMARY_STRIPPEDIN,
	LANG_PAN_SUMMARY_DOWNTIME,
	LANG_PAN_SUMMARY_CANCELCOUNT,
	LANG_PAN_SUMMARY_SHIELD,

	/* panels: logger */
	LANG_PAN_LOGGER_HEADER = 390,
	LANG_PAN_LOGGER_CBT,
	LANG_PAN_LOGGER_ENG,
	LANG_PAN_LOGGER_GME,
	LANG_PAN_LOGGER_BOT,
	LANG_PAN_LOGGER_TOP,
	LANG_PAN_LOGGER_AUTO,
	LANG_PAN_LOGGER_SCROLL,
	LANG_PAN_LOGGER_FILTER,
	LANG_PAN_LOGGER_RESQ,
	LANG_PAN_LOGGER_CBTQ,
	LANG_PAN_LOGGER_MBLK,
	LANG_PAN_LOGGER_MSZ,
	LANG_PAN_LOGGER_AG,
	LANG_PAN_LOGGER_CH,
	LANG_PAN_LOGGER_CEA,
	LANG_PAN_LOGGER_GRC,
	LANG_PAN_LOGGER_CBS,
	LANG_PAN_LOGGER_CCX,
	LANG_PAN_LOGGER_TGC,
	LANG_PAN_LOGGER_SCR,
	LANG_PAN_LOGGER_RTH,
	LANG_PAN_LOGGER_CCS,
	LANG_PAN_LOGGER_BCX,
	LANG_PAN_LOGGER_GPT,
	LANG_PAN_LOGGER_RND,
	LANG_PAN_LOGGER_REF,
	LANG_PAN_LOGGER_LOGGER,
	LANG_PAN_LOGGER_CHANNEL,
	LANG_PAN_LOGGER_SIM,
	LANG_PAN_LOGGER_MCI,
	LANG_PAN_LOGGER_MCO,

	/* panels: compass */
	LANG_PAN_COMPASS_HEADER = 440,
	LANG_PAN_COMPASS_N,
	LANG_PAN_COMPASS_E,
	LANG_PAN_COMPASS_S,
	LANG_PAN_COMPASS_W,
	LANG_PAN_COMPASS_BEARING,

	/* panels: metrics */
	LANG_PAN_METRICS_HEADER = 450,
	LANG_PAN_METRICS_FPS,
	LANG_PAN_METRICS_PING,
	LANG_PAN_METRICS_MAPTYPE,
	LANG_PAN_METRICS_MAPID,
	LANG_PAN_METRICS_MAPLV,
	LANG_PAN_METRICS_BUILDGW,
	LANG_PAN_METRICS_BUILDARC,
	LANG_PAN_METRICS_TICK,

	/* panels: gathering */
	LANG_PAN_GATHER_HEADER = 460,
	LANG_PAN_GATHER_PICKH,
	LANG_PAN_GATHER_AXEH,
	LANG_PAN_GATHER_SICKLEH,
	LANG_PAN_GATHER_PICKED,
	LANG_PAN_GATHER_AXED,
	LANG_PAN_GATHER_SICKLED,
	LANG_PAN_GATHER_TOOLS,
	LANG_PAN_GATHER_PICKREMAIN,
	LANG_PAN_GATHER_AXEREMAIN,
	LANG_PAN_GATHER_SICKLEREMAIN,
	LANG_PAN_GATHER_TIME,

	/* panels: options */
	LANG_PAN_OPTIONS_HEADER = 490,
	LANG_PAN_OPTIONS_PANELS,
	LANG_PAN_OPTIONS_SUMMARIES,
	LANG_PAN_OPTIONS_BASIC,
	LANG_PAN_OPTIONS_Y,
	LANG_PAN_OPTIONS_N,
	LANG_PAN_OPTIONS_SM_LINK,
	LANG_PAN_OPTIONS_SM_AUTOOPEN,
	LANG_PAN_OPTIONS_SM_ADPSOUT,
	LANG_PAN_OPTIONS_SM_ADPSIN,
	LANG_PAN_OPTIONS_SM_BUFFS,
	LANG_PAN_OPTIONS_SM_RATES,
	LANG_PAN_OPTIONS_SM_AGSTATES,
	LANG_PAN_OPTIONS_SM_BUFFEVENTS,
	LANG_PAN_OPTIONS_SM_RESULTS,
	LANG_PAN_OPTIONS_BS_LOCKTARGET,
	LANG_PAN_OPTIONS_BS_SAVELOGS,
	LANG_PAN_OPTIONS_BS_NPCINPATH,
	LANG_PAN_OPTIONS_BS_COMPRESS,
	LANG_PAN_OPTIONS_BS_PANSNAP,
	LANG_PAN_OPTIONS_BS_ALWAYSREQMOD,
	LANG_PAN_OPTIONS_BS_COMBATDETAIL,
	LANG_PAN_OPTIONS_BS_VERBOSITY,
	LANG_PAN_OPTIONS_RESTRICTED,
	LANG_PAN_OPTIONS_RS_HBARS,
	LANG_PAN_OPTIONS_RS_EMBEDLL,
	LANG_PAN_OPTIONS_RS_FLASHWHISPER,
	LANG_PAN_OPTIONS_RS_FLASHPARTY,
	LANG_PAN_OPTIONS_RS_RWACCEPT,
	LANG_PAN_OPTIONS_RS_CONSUMEMAX,
	LANG_PAN_OPTIONS_RS_CONSUMESKIPDELAY,
	LANG_PAN_OPTIONS_RS_KEYS,
	LANG_PAN_OPTIONS_BS_GUILDINPATH,
	LANG_PAN_OPTIONS_BS_BGBARS,
	LANG_PAN_OPTIONS_BS_FWDINPUT,
	LANG_PAN_OPTIONS_BS_TRANSPARENCY,
	LANG_PAN_OPTIONS_BS_BGBARCOLOUR,
	LANG_PAN_OPTIONS_BS_PLAYERINPATH,
	LANG_PAN_OPTIONS_BS_ALTERNATEUI,
	LANG_PAN_OPTIONS_BS_RECOUNTLIKE,
	LANG_PAN_OPTIONS_BS_ALTUITRIM,
	LANG_PAN_OPTIONS_BS_ALTUIMOVELOCK,
	LANG_PAN_OPTIONS_BS_MENULOCK,
	LANG_PAN_OPTIONS_BS_NOTOTALS,
	LANG_PAN_OPTIONS_BS_ALTUICLICKLOCK,
	LANG_PAN_OPTIONS_RS_EMBEDEXTRA,
	LANG_PAN_OPTIONS_LOGGING,

	/* panels: templates */
	LANG_PAN_TEMPLATES_HEADER = 570,
	LANG_PAN_TEMPLATES_LOAD,
	LANG_PAN_TEMPLATES_SAVE,
	LANG_PAN_TEMPLATES_NONE,
	LANG_PAN_TEMPLATES_TRAITS,
	LANG_PAN_TEMPLATES_GEAR,
	LANG_PAN_TEMPLATES_SKILLS,
	LANG_PAN_TEMPLATES_LEGENDARY,
	LANG_PAN_TEMPLATES_GLOBAL,
	LANG_PAN_TEMPLATES_SAVETRAITS,
	LANG_PAN_TEMPLATES_SAVEGEAR,
	LANG_PAN_TEMPLATES_SAVESKILLS,
	LANG_PAN_TEMPLATES_NAME,
	LANG_PAN_TEMPLATES_DELETE,
	LANG_PAN_TEMPLATES_NOTHING,
	LANG_PAN_TEMPLATES_SAVED,
	LANG_PAN_TEMPLATES_LOADING,
	LANG_PAN_TEMPLATES_REDUCEDRATE,
	LANG_PAN_TEMPLATES_DISABLED,
	LANG_PAN_TEMPLATES_CANCEL,

	/* panels: buffs */
	LANG_PAN_BUFFS_HEADER = 590,
	LANG_PAN_BUFFS_WARNING,

	/* panels: details */
	LANG_PAN_DETAIL_HEADER = 610,
	LANG_PAN_DETAIL_MIN,
	LANG_PAN_DETAIL_MAX,
	LANG_PAN_DETAIL_ELAPSED,

	/* common: custom */
	LANG_COMMON_CSK_DODGE = 620,
	LANG_COMMON_CSK_SHIELD,

	/* common: skills2 */
	LANG_COMMON_SKILLS2_NOINCOMINGDMG = 630,
	LANG_COMMON_SKILLS2_SHIELD,

	/* end */
	LANG_END
};
