#include "CCProfileConsts.h"

namespace soomla {
    char const *CCProfileConsts::JSON_REWARD_ID = "rewardId";
    char const *CCProfileConsts::JSON_NAME = "name";
    char const *CCProfileConsts::JSON_REPEATABLE = "repeatable";
    char const *CCProfileConsts::JSON_ICON_URL = "iconUrl";
    char const *CCProfileConsts::JSON_REWARDS = "rewards";
    char const *CCProfileConsts::JSON_AMOUNT = "amount";
    char const *CCProfileConsts::JSON_ASSOCIATED_ITEM_ID = "associatedItemId";

    char const *CCProfileConsts::JSON_PROVIDER = "provider";
    char const *CCProfileConsts::JSON_PROFILE_ID = "profileId";
    char const *CCProfileConsts::JSON_USERNAME = "username";
    char const *CCProfileConsts::JSON_EMAIL = "email";
    char const *CCProfileConsts::JSON_FIRST_NAME = "firstName";
    char const *CCProfileConsts::JSON_LAST_NAME = "lastName";
    char const *CCProfileConsts::JSON_AVATAR_LINK = "avatarLink";
    char const *CCProfileConsts::JSON_LOCATION = "location";
    char const *CCProfileConsts::JSON_GENDER = "gender";
    char const *CCProfileConsts::JSON_LANGUAGE = "language";
    char const *CCProfileConsts::JSON_BIRTHDAY = "birthday";

    char const *CCProfileConsts::JSON_JSON_TYPE_BADGE = "badge";
    char const *CCProfileConsts::JSON_JSON_TYPE_RANDOM = "random";
    char const *CCProfileConsts::JSON_JSON_TYPE_SEQUENCE = "sequence";
    char const *CCProfileConsts::JSON_JSON_TYPE_ITEM = "item";
    char const *CCProfileConsts::JSON_JSON_TYPE_USER_PROFILE = "userProfile";

    char const *CCProfileConsts::EVENT_LOGIN_CANCELLED = "com.soomla.profile.events.auth.LoginCancelledEvent";
    char const *CCProfileConsts::EVENT_LOGIN_FAILED = "com.soomla.profile.events.auth.LoginFailedEvent";
    char const *CCProfileConsts::EVENT_LOGIN_FINISHED = "com.soomla.profile.events.auth.LoginFinishedEvent";
    char const *CCProfileConsts::EVENT_LOGIN_STARTED = "com.soomla.profile.events.auth.LoginStartedEvent";

    char const *CCProfileConsts::EVENT_LOGOUT_FAILED = "com.soomla.profile.events.auth.LogoutFailedEvent";
    char const *CCProfileConsts::EVENT_LOGOUT_FINISHED = "com.soomla.profile.events.auth.LogoutFinishedEvent";
    char const *CCProfileConsts::EVENT_LOGOUT_STARTED = "com.soomla.profile.events.auth.LogoutStartedEvent";

    char const *CCProfileConsts::EVENT_GET_CONTACTS_FAILED = "com.soomla.profile.events.social.GetContactsFailedEvent";
    char const *CCProfileConsts::EVENT_GET_CONTACTS_FINISHED = "com.soomla.profile.events.social.GetContactsFinishedEvent";
    char const *CCProfileConsts::EVENT_GET_CONTACTS_STARTED = "com.soomla.profile.events.social.GetContactsStartedEvent";

    char const *CCProfileConsts::EVENT_SOCIAL_ACTION_FAILED = "com.soomla.profile.events.social.SocialActionFailedEvent";
    char const *CCProfileConsts::EVENT_SOCIAL_ACTION_FINISHED = "com.soomla.profile.events.social.SocialActionFinishedEvent";
    char const *CCProfileConsts::EVENT_SOCIAL_ACTION_STARTED = "com.soomla.profile.events.social.SocialActionStartedEvent";

    char const *CCProfileConsts::EVENT_REWARD_GIVEN = "com.soomla.profile.events.RewardGivenEvent";

    char const *CCProfileConsts::EVENT_USER_PROFILE_UPDATED = "com.soomla.profile.events.UserProfileUpdatedEvent";

}