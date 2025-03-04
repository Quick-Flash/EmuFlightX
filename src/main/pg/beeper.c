/*
 * This file is part of Cleanflight and Betaflight and EmuFlight.
 *
 * Cleanflight and Betaflight and EmuFlight are free software. You can redistribute
 * this software and/or modify this software under the terms of the
 * GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option)
 * any later version.
 *
 * Cleanflight and Betaflight and EmuFlight are distributed in the hope that they
 * will be useful, but WITHOUT ANY WARRANTY; without even the implied
 * warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

#include "platform.h"

#ifdef USE_BEEPER

#include "io/beeper.h"

#include "pg/pg.h"
#include "pg/pg_ids.h"

#include "beeper.h"

PG_REGISTER_WITH_RESET_TEMPLATE(beeperConfig_t, beeperConfig, PG_BEEPER_CONFIG, 2);

PG_RESET_TEMPLATE(beeperConfig_t, beeperConfig,
    .dshotBeaconTone = 1,
    .dshotBeaconOffFlags = DSHOT_BEACON_ALLOWED_MODES,
);
#endif
