#ifndef __INCLUDE_AIGOV__
#define __INCLUDE_AIGOV__

#ifndef pr_fmt
#define pr_fmt(fmt) KBUILD_MODNAME ": " fmt
#endif

#define AIGOV_TAG "aigov: "
#define aigov_logv(fmt...) \
	do { \
		if (aigov_log_lv < 1) \
			pr_info(AIGOV_TAG fmt); \
	} while (0)

#define aigov_logi(fmt...) \
	do { \
		if (aigov_log_lv < 2) \
			pr_info(AIGOV_TAG fmt); \
	} while (0)

#define aigov_logw(fmt...) \
	do { \
		if (aigov_log_lv < 3) \
			pr_warn(AIGOV_TAG fmt); \
	} while (0)

#define aigov_loge(fmt...) pr_err(AIGOV_TAG fmt)
#define aigov_logd(fmt...) pr_debug(AIGOV_TAG fmt)
