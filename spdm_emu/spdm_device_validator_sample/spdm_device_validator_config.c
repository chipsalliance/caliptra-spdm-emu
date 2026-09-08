/**
 *  Copyright Notice:
 *  Copyright 2021-2022 DMTF. All rights reserved.
 *  License: BSD 3-Clause License. For full text see link: https://github.com/DMTF/spdm-emu/blob/main/LICENSE.md
 **/

#include "spdm_device_validator_sample.h"

common_test_case_config_t m_spdm_test_group_version_configs[] = {
    {SPDM_RESPONDER_TEST_CASE_VERSION_SUCCESS_10, COMMON_TEST_ACTION_RUN},
    {COMMON_TEST_ID_END, COMMON_TEST_ACTION_SKIP},
};

common_test_case_config_t m_spdm_test_group_capabilities_configs[] = {
    {SPDM_RESPONDER_TEST_CASE_CAPABILITIES_SUCCESS_10, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CAPABILITIES_VERSION_MISMATCH, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CAPABILITIES_SUCCESS_11, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CAPABILITIES_INVALID_REQUEST, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CAPABILITIES_SUCCESS_12, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CAPABILITIES_UNEXPECTED_REQUEST_NON_IDENTICAL,
     COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CAPABILITIES_SUCCESS_13, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CAPABILITIES_SUCCESS_14, COMMON_TEST_ACTION_RUN},
    {COMMON_TEST_ID_END, COMMON_TEST_ACTION_SKIP},
};

common_test_case_config_t m_spdm_test_group_algorithms_configs[] = {
    {SPDM_RESPONDER_TEST_CASE_ALGORITHMS_SUCCESS_10, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_ALGORITHMS_VERSION_MISMATCH, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_ALGORITHMS_INVALID_REQUEST, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_ALGORITHMS_SUCCESS_11, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_ALGORITHMS_SUCCESS_12, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_ALGORITHMS_UNEXPECTED_REQUEST_NON_IDENTICAL, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_ALGORITHMS_SUCCESS_14, COMMON_TEST_ACTION_RUN},
    {COMMON_TEST_ID_END, COMMON_TEST_ACTION_SKIP},
};

common_test_case_config_t m_spdm_test_group_digests_configs[] = {
    {SPDM_RESPONDER_TEST_CASE_DIGESTS_SUCCESS_10, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_DIGESTS_VERSION_MISMATCH, COMMON_TEST_ACTION_RUN},
    {COMMON_TEST_ID_END, COMMON_TEST_ACTION_SKIP},
};

common_test_case_config_t m_spdm_test_group_certificate_configs[] = {
    {SPDM_RESPONDER_TEST_CASE_CERTIFICATE_SUCCESS_10, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CERTIFICATE_VERSION_MISMATCH, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CERTIFICATE_INVALID_REQUEST, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CERTIFICATE_SPDM_X509_CERTIFICATE, COMMON_TEST_ACTION_RUN},
    {COMMON_TEST_ID_END, COMMON_TEST_ACTION_SKIP},
};

common_test_case_config_t m_spdm_test_group_challenge_auth_configs[] = {
    {SPDM_RESPONDER_TEST_CASE_CHALLENGE_AUTH_SUCCESS_10_A1B1C1, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CHALLENGE_AUTH_SUCCESS_10_A1B2C1, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CHALLENGE_AUTH_SUCCESS_10_A1B3C1, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CHALLENGE_AUTH_VERSION_MISMATCH, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CHALLENGE_AUTH_INVALID_REQUEST, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CHALLENGE_AUTH_SUCCESS_12_A1B1C1, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CHALLENGE_AUTH_SUCCESS_12_A1B2C1, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CHALLENGE_AUTH_SUCCESS_12_A1B3C1, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CHALLENGE_AUTH_SUCCESS_12_A1B4C1, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CHALLENGE_AUTH_SUCCESS_12_A2B1C1, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CHALLENGE_AUTH_SUCCESS_12_A2B2C1, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CHALLENGE_AUTH_SUCCESS_12_A2B3C1, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CHALLENGE_AUTH_SUCCESS_12_A2B4C1, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CHALLENGE_AUTH_SUCCESS_14_A1B1C1, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CHALLENGE_AUTH_SUCCESS_14_A1B2C1, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CHALLENGE_AUTH_SUCCESS_14_A1B3C1, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CHALLENGE_AUTH_SUCCESS_14_A1B4C1, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CHALLENGE_AUTH_SUCCESS_14_A2B1C1, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CHALLENGE_AUTH_SUCCESS_14_A2B2C1, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CHALLENGE_AUTH_SUCCESS_14_A2B3C1, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_CHALLENGE_AUTH_SUCCESS_14_A2B4C1, COMMON_TEST_ACTION_RUN},
    {COMMON_TEST_ID_END, COMMON_TEST_ACTION_SKIP},
};

common_test_case_config_t m_spdm_test_group_measurements_configs[] = {
    {SPDM_RESPONDER_TEST_CASE_MEASUREMENTS_SUCCESS_10, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_MEASUREMENTS_VERSION_MISMATCH, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_MEASUREMENTS_INVALID_REQUEST, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_MEASUREMENTS_SPDM_MEASUREMENT_BLOCK, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_MEASUREMENTS_SUCCESS_11, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_MEASUREMENTS_SUCCESS_11_IN_DHE_SESSION, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_MEASUREMENTS_UNEXPECTED_REQUEST_IN_DHE_SESSION_HS,
     COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_MEASUREMENTS_SUCCESS_12, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_MEASUREMENTS_SUCCESS_12_IN_DHE_SESSION, COMMON_TEST_ACTION_RUN},
    {COMMON_TEST_ID_END, COMMON_TEST_ACTION_SKIP},
};

common_test_case_config_t m_spdm_test_group_key_exchange_rsp_configs[] = {
    {SPDM_RESPONDER_TEST_CASE_KEY_EXCHANGE_RSP_SUCCESS_11, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_KEY_EXCHANGE_RSP_SUCCESS_11_HS_CLEAR, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_KEY_EXCHANGE_RSP_VERSION_MISMATCH, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_KEY_EXCHANGE_RSP_UNEXPECTED_REQUEST_IN_SESSION,
     COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_KEY_EXCHANGE_RSP_INVALID_REQUEST, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_KEY_EXCHANGE_RSP_SUCCESS_12, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_KEY_EXCHANGE_RSP_SUCCESS_12_HS_CLEAR, COMMON_TEST_ACTION_RUN},
    {COMMON_TEST_ID_END, COMMON_TEST_ACTION_SKIP},
};

common_test_case_config_t m_spdm_test_group_finish_rsp_configs[] = {
    {SPDM_RESPONDER_TEST_CASE_FINISH_RSP_SUCCESS_11, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_FINISH_RSP_SUCCESS_11_HS_CLEAR, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_FINISH_RSP_VERSION_MISMATCH, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_FINISH_RSP_UNEXPECTED_REQUEST_IN_SESSION, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_FINISH_RSP_INVALID_REQUEST, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_FINISH_RSP_DECRYPT_ERROR_INVALID_VERIFY_DATA, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_FINISH_RSP_DECRYPT_ERROR_INVALID_VERIFY_DATA_HS_CLEAR,
     COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_FINISH_RSP_SUCCESS_12, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_FINISH_RSP_SUCCESS_12_HS_CLEAR, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_FINISH_RSP_SESSION_REQUIRED, COMMON_TEST_ACTION_RUN},
    {COMMON_TEST_ID_END, COMMON_TEST_ACTION_SKIP},
};

common_test_case_config_t m_spdm_test_group_heartbeat_ack_configs[] = {
    {SPDM_RESPONDER_TEST_CASE_HEARTBEAT_ACK_SUCCESS_11_IN_DHE_SESSION, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_HEARTBEAT_ACK_VERSION_MISMATCH_IN_DHE_SESSION,
     COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_HEARTBEAT_ACK_UNEXPECTED_REQUEST_IN_DHE_SESSION_HS,
     COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_HEARTBEAT_ACK_SESSION_REQUIRED, COMMON_TEST_ACTION_RUN},
    {COMMON_TEST_ID_END, COMMON_TEST_ACTION_SKIP},
};

common_test_case_config_t m_spdm_test_group_key_update_ack_configs[] = {
    {SPDM_RESPONDER_TEST_CASE_KEY_UPDATE_ACK_SUCCESS_11_IN_DHE_SESSION, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_KEY_UPDATE_ACK_VERSION_MISMATCH_IN_DHE_SESSION,
     COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_KEY_UPDATE_ACK_INVALID_REQUEST_IN_DHE_SESSION,
     COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_KEY_UPDATE_ACK_UNEXPECTED_REQUEST_IN_DHE_SESSION_HS,
     COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_KEY_UPDATE_ACK_SESSION_REQUIRED, COMMON_TEST_ACTION_RUN},
    {COMMON_TEST_ID_END, COMMON_TEST_ACTION_SKIP},
};

common_test_case_config_t m_spdm_test_group_end_session_ack_configs[] = {
    {SPDM_RESPONDER_TEST_CASE_END_SESSION_ACK_SUCCESS_11_IN_DHE_SESSION, COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_END_SESSION_ACK_VERSION_MISMATCH_IN_DHE_SESSION,
     COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_END_SESSION_ACK_UNEXPECTED_REQUEST_IN_DHE_SESSION_HS,
     COMMON_TEST_ACTION_RUN},
    {SPDM_RESPONDER_TEST_CASE_END_SESSION_ACK_SESSION_REQUIRED, COMMON_TEST_ACTION_RUN},
    {COMMON_TEST_ID_END, COMMON_TEST_ACTION_SKIP},
};

common_test_group_config_t m_spdm_test_group_configs[] = {
    {SPDM_RESPONDER_TEST_GROUP_VERSION,           COMMON_TEST_ACTION_RUN,
     m_spdm_test_group_version_configs},
    {SPDM_RESPONDER_TEST_GROUP_CAPABILITIES,      COMMON_TEST_ACTION_RUN,
     m_spdm_test_group_capabilities_configs},
    {SPDM_RESPONDER_TEST_GROUP_ALGORITHMS,        COMMON_TEST_ACTION_RUN,
     m_spdm_test_group_algorithms_configs},
    {SPDM_RESPONDER_TEST_GROUP_DIGESTS,           COMMON_TEST_ACTION_RUN,
     m_spdm_test_group_digests_configs},
    {SPDM_RESPONDER_TEST_GROUP_CERTIFICATE,       COMMON_TEST_ACTION_RUN,
     m_spdm_test_group_certificate_configs},
    {SPDM_RESPONDER_TEST_GROUP_CHALLENGE_AUTH,    COMMON_TEST_ACTION_RUN,
     m_spdm_test_group_challenge_auth_configs},
    {SPDM_RESPONDER_TEST_GROUP_MEASUREMENTS,      COMMON_TEST_ACTION_RUN,
     m_spdm_test_group_measurements_configs},
    {SPDM_RESPONDER_TEST_GROUP_KEY_EXCHANGE_RSP,  COMMON_TEST_ACTION_RUN,
     m_spdm_test_group_key_exchange_rsp_configs},
    {SPDM_RESPONDER_TEST_GROUP_FINISH_RSP,        COMMON_TEST_ACTION_RUN,
     m_spdm_test_group_finish_rsp_configs},
    {SPDM_RESPONDER_TEST_GROUP_HEARTBEAT_ACK,     COMMON_TEST_ACTION_RUN,
     m_spdm_test_group_heartbeat_ack_configs},
    {SPDM_RESPONDER_TEST_GROUP_KEY_UPDATE_ACK,    COMMON_TEST_ACTION_RUN,
     m_spdm_test_group_key_update_ack_configs},
    {SPDM_RESPONDER_TEST_GROUP_END_SESSION_ACK,   COMMON_TEST_ACTION_RUN,
     m_spdm_test_group_end_session_ack_configs},
    {COMMON_TEST_ID_END,                          COMMON_TEST_ACTION_SKIP, NULL},
};

common_test_suite_config_t m_spdm_responder_validator_config = {
    "spdm_responder_validator default config",
    m_spdm_test_group_configs
};


typedef struct {
    const char *name;
    uint32_t group_id;
} spdm_test_group_name_t;

static const spdm_test_group_name_t m_spdm_test_group_names[] = {
    {"VERSION", SPDM_RESPONDER_TEST_GROUP_VERSION},
    {"CAPABILITIES", SPDM_RESPONDER_TEST_GROUP_CAPABILITIES},
    {"ALGORITHMS", SPDM_RESPONDER_TEST_GROUP_ALGORITHMS},
    {"DIGESTS", SPDM_RESPONDER_TEST_GROUP_DIGESTS},
    {"CERTIFICATE", SPDM_RESPONDER_TEST_GROUP_CERTIFICATE},
    {"CHALLENGE_AUTH", SPDM_RESPONDER_TEST_GROUP_CHALLENGE_AUTH},
    {"MEASUREMENTS", SPDM_RESPONDER_TEST_GROUP_MEASUREMENTS},
    {"KEY_EXCHANGE_RSP", SPDM_RESPONDER_TEST_GROUP_KEY_EXCHANGE_RSP},
    {"FINISH_RSP", SPDM_RESPONDER_TEST_GROUP_FINISH_RSP},
    {"HEARTBEAT_ACK", SPDM_RESPONDER_TEST_GROUP_HEARTBEAT_ACK},
    {"KEY_UPDATE_ACK", SPDM_RESPONDER_TEST_GROUP_KEY_UPDATE_ACK},
    {"END_SESSION_ACK", SPDM_RESPONDER_TEST_GROUP_END_SESSION_ACK},
};

static char m_spdm_responder_validator_config_name[256];

static void spdm_device_validator_print_test_group_names(void)
{
    size_t index;

    printf("Available test groups:");
    for (index = 0; index < LIBSPDM_ARRAY_SIZE(m_spdm_test_group_names); index++) {
        printf("%s%s", index == 0 ? " " : ",", m_spdm_test_group_names[index].name);
    }
    printf("\n");
}

static common_test_group_config_t *spdm_device_validator_find_group_config(uint32_t group_id)
{
    size_t index;

    for (index = 0; m_spdm_test_group_configs[index].group_id != COMMON_TEST_ID_END; index++) {
        if (m_spdm_test_group_configs[index].group_id == group_id) {
            return &m_spdm_test_group_configs[index];
        }
    }
    return NULL;
}

static bool spdm_device_validator_apply_test_groups(const char *test_groups)
{
    char test_groups_copy[192];
    char *group_name;
    size_t index;
    bool found;
    common_test_group_config_t *group_config;

    if ((test_groups == NULL) || (test_groups[0] == '\0') ||
        (strlen(test_groups) >= sizeof(test_groups_copy)) ||
        (test_groups[0] == ',') || (test_groups[strlen(test_groups) - 1] == ',') ||
        (strstr(test_groups, ",,") != NULL)) {
        printf("Invalid --test-groups value: %s\n", test_groups == NULL ? "(missing)" : test_groups);
        spdm_device_validator_print_test_group_names();
        return false;
    }

    strcpy(test_groups_copy, test_groups);
    group_name = strtok(test_groups_copy, ",");
    while (group_name != NULL) {
        found = false;
        for (index = 0; index < LIBSPDM_ARRAY_SIZE(m_spdm_test_group_names); index++) {
            if (strcmp(group_name, m_spdm_test_group_names[index].name) == 0) {
                found = true;
                break;
            }
        }
        if (!found) {
            printf("Unknown test group: %s\n", group_name);
            spdm_device_validator_print_test_group_names();
            return false;
        }
        group_name = strtok(NULL, ",");
    }

    for (index = 0; m_spdm_test_group_configs[index].group_id != COMMON_TEST_ID_END; index++) {
        m_spdm_test_group_configs[index].action = COMMON_TEST_ACTION_SKIP;
    }

    strcpy(test_groups_copy, test_groups);
    group_name = strtok(test_groups_copy, ",");
    while (group_name != NULL) {
        for (index = 0; index < LIBSPDM_ARRAY_SIZE(m_spdm_test_group_names); index++) {
            if (strcmp(group_name, m_spdm_test_group_names[index].name) == 0) {
                group_config = spdm_device_validator_find_group_config(
                    m_spdm_test_group_names[index].group_id);
                LIBSPDM_ASSERT(group_config != NULL);
                group_config->action = COMMON_TEST_ACTION_RUN;
                break;
            }
        }
        group_name = strtok(NULL, ",");
    }

    snprintf(m_spdm_responder_validator_config_name,
             sizeof(m_spdm_responder_validator_config_name),
             "spdm_responder_validator selected groups: %s", test_groups);
    m_spdm_responder_validator_config.config_name = m_spdm_responder_validator_config_name;
    printf("Selected test groups: %s\n", test_groups);
    return true;
}

bool spdm_device_validator_process_test_group_args(int *argc, char *argv[])
{
    const char *test_groups;
    int read_index;
    int write_index;

    test_groups = NULL;
    write_index = 1;
    for (read_index = 1; read_index < *argc;) {
        if (strcmp(argv[read_index], "--test-groups") == 0) {
            if ((test_groups != NULL) || (read_index + 1 >= *argc)) {
                printf("--test-groups must be specified once with a value\n");
                return false;
            }
            test_groups = argv[read_index + 1];
            read_index += 2;
        } else if (strncmp(argv[read_index], "--test-groups=", 14) == 0) {
            if (test_groups != NULL) {
                printf("--test-groups must be specified once\n");
                return false;
            }
            test_groups = argv[read_index] + 14;
            read_index++;
        } else {
            argv[write_index++] = argv[read_index++];
        }
    }
    argv[write_index] = NULL;
    *argc = write_index;

    if (test_groups == NULL) {
        printf("Selected test groups: ALL (default full suite)\n");
        return true;
    }
    return spdm_device_validator_apply_test_groups(test_groups);
}
