/**
 * @file notification_service.hpp
 * @author Samuele Radici (kiocode.com)
 * @brief Notification service component.
 * @details This component is responsible for displaying notifications.
 * @version 0.1
 * @date 2025-05-02
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#pragma once

#include <vector>

#include <xenon/models/notification.hpp>

#include <xenon/components/component.hpp>

/**
 * @brief Notification service component.
 * @details This component is responsible for displaying notifications.
 * 
 */
class CNotificationService : public CComponent {
public:

    /**
     * @brief Render notifications.
     */
    void RenderNotifications();

    /**
     * @brief Remove a queued notification.
     * @param nIndex Index of the notification to remove.
     */
    void RemoveQueuedNotification(int nIndex);

    /**
     * @brief Notify.
     * @param title Title of the notification.
     * @param message Message of the notification.
     */
    void Notify(std::string title, std::string message);

    /**
     * @brief Set fonts.
     * @param imFont Font.
     * @param imLogo Logo font.
     */
    void SetFonts(ImFont* imFont, ImFont* imLogo) {
        m_imFont = imFont;
        m_imLogo = imLogo;
    }

private:
    ImFont* m_imFont = nullptr; 
    ImFont* m_imLogo = nullptr; 

    std::vector<Notification> m_vQueuedNotifications;
};
