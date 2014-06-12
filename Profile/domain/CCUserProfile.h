//
// Created by Fedor on 03/06/14.
//


#ifndef __CCUserProfile_H_
#define __CCUserProfile_H_

#include "cocos2d.h"
#include "SoomlaProfileMacros.h"
#include "CCProfileJsonConsts.h"
#include "CCDomain.h"

namespace soomla {
    class CCUserProfile : public CCDomain {
        SL_SYNTHESIZE_RETAIN_WITH_DICT(cocos2d::__String *, mProvider, Provider, JSON_PROVIDER);
        SL_SYNTHESIZE_RETAIN_WITH_DICT(cocos2d::__String *, mProfileId, ProfileId, JSON_PROFILE_ID);
        SL_SYNTHESIZE_RETAIN_WITH_DICT(cocos2d::__String *, mEmail, Email, JSON_EMAIL);
        SL_SYNTHESIZE_RETAIN_WITH_DICT(cocos2d::__String *, mUsername, Username, JSON_USERNAME);
        SL_SYNTHESIZE_RETAIN_WITH_DICT(cocos2d::__String *, mFirstName, FirstName, JSON_FIRST_NAME);
        SL_SYNTHESIZE_RETAIN_WITH_DICT(cocos2d::__String *, mLastName, LastName, JSON_LAST_NAME);
        SL_SYNTHESIZE_RETAIN_WITH_DICT(cocos2d::__String *, mAvatarLink, AvatarLink, JSON_AVATAR_LINK);
        SL_SYNTHESIZE_RETAIN_WITH_DICT(cocos2d::__String *, mLocation, Location, JSON_LOCATION);
        SL_SYNTHESIZE_RETAIN_WITH_DICT(cocos2d::__String *, mGender, Gender, JSON_GENDER);
        SL_SYNTHESIZE_RETAIN_WITH_DICT(cocos2d::__String *, mLanguage, Language, JSON_LANGUAGE);
        SL_SYNTHESIZE_RETAIN_WITH_DICT(cocos2d::__String *, mBirthday, Birthday, JSON_BIRTHDAY);
    public:
        CCUserProfile() : CCDomain(), mProfileId(NULL), mEmail(NULL) , mUsername(NULL),
                          mFirstName(NULL), mLastName(NULL), mAvatarLink(NULL), mLocation(NULL) ,
                          mGender(NULL), mLanguage(NULL), mBirthday(NULL) {};

        static CCUserProfile *create(
                cocos2d::__String *provider,
                cocos2d::__String *profileId,
                cocos2d::__String *email,
                cocos2d::__String *username,
                cocos2d::__String *firstName,
                cocos2d::__String *lastName,
                cocos2d::__String *avatarLink,
                cocos2d::__String *location,
                cocos2d::__String *gender,
                cocos2d::__String *language,
                cocos2d::__String *birthday);

        SL_CREATE_WITH_DICTIONARY(CCUserProfile);

        virtual bool init(
                cocos2d::__String *provider,
                cocos2d::__String *profileId,
                cocos2d::__String *email,
                cocos2d::__String *username,
                cocos2d::__String *firstName,
                cocos2d::__String *lastName,
                cocos2d::__String *avatarLink,
                cocos2d::__String *location,
                cocos2d::__String *gender,
                cocos2d::__String *language,
                cocos2d::__String *birthday);

        virtual bool initWithDictionary(cocos2d::__Dictionary *dict);

        virtual cocos2d::__Dictionary *toDictionary();

        virtual ~CCUserProfile();
    };
}

#endif //__CCUserProfile_H_