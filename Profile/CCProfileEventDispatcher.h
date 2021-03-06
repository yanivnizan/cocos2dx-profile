/*
 Copyright (C) 2012-2014 Soomla Inc.
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#ifndef __CCProfileEventDispatcher_H_
#define __CCProfileEventDispatcher_H_

#include "cocos2d.h"
#include "CCProfileEventHandler.h"
#include "CCAbstractAggregatedEventHandler.h"
#include "CCSocialActionUtils.h"
#include "CCUserProfileUtils.h"

namespace soomla {

	/** 
     @class CCProfileEventDispatcher
     @brief Calls event handler functions when events are fired
     
     Signs up to native Profile events through CCSoomlaEventDispatcher.
     When the events arrive this class calls event handler functions, to tie
     it to your event handler call addEventHandler().
     */
    class CCProfileEventDispatcher : public CCAbstractAggregatedEventHandler<CCProfileEventHandler>, public CCProfileEventHandler {
    public:
		/**
		   This class is singleton, access it with this function.
		 */
        static CCProfileEventDispatcher *getInstance();

        /**
         Initializes the event dispatcher after construction
         */
        bool init();

        /** 
         see parent
         */
        virtual void onLoginFailed(CCProvider provider, cocos2d::__String *errorDescription);

        /**
         see parent
         */
        virtual void onLoginFinished(CCUserProfile *userProfile);

        /**
         see parent
         */
        virtual void onLoginStarted(CCProvider provider);

        /**
         see parent
         */
        virtual void onLogoutFailed(CCProvider provider, cocos2d::__String *errorDescription);

        /**
         see parent
         */
        virtual void onLogoutFinished(CCProvider provider);
        
        /**
         see parent
         */
        virtual void onLogoutStarted(CCProvider provider);

        /**
         see parent
         */
        virtual void onGetContactsFailed(CCProvider provider, cocos2d::__String *errorDescription);

        /**
         see parent
         */
        virtual void onGetContactsFinished(CCProvider provider, cocos2d::__Array *contactsDict);

        /**
         see parent
         */
        virtual void onGetContactsStarted(CCProvider provider);

        /**
         see parent
         */
        virtual void onGetFeedFailed(CCProvider provider, cocos2d::__String *errorDescription);

        /**
         see parent
         */
        virtual void onGetFeedFinished(CCProvider provider, cocos2d::__Array *feedList);

        /**
         see parent
         */
        virtual void onGetFeedStarted(CCProvider provider);

        /**
         see parent
         */
        virtual void onSocialActionFailedEvent(CCProvider provider, CCSocialActionType socialActionType, cocos2d::__String *errorDescription);

        /**
         see parent
         */
        virtual void onSocialActionFinishedEvent(CCProvider provider, CCSocialActionType socialActionType);

        /**
         see parent
         */
        virtual void onSocialActionStartedEvent(CCProvider provider, CCSocialActionType socialActionType);

        /**
         see parent
         */
        virtual void onLoginCancelledEvent(CCProvider provider);
        
        /**
         see parent
         */
        virtual void onUserProfileUpdatedEvent(CCUserProfile *userProfile);

    private:
        CCUserProfile *extractUserProfile(Ref *userProfileRef);
        cocos2d::__Array *extractUserProfileArray(Ref *userProfileDictArray);
    };
};

#endif //__CCProfileEventDispatcher_H_
